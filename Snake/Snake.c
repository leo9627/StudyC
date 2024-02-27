#include"Snake.h"
void Set_Pos(int x,int y)//移动光标
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(handle, pos);
}
void WelcomeToGame()
{
	//欢迎界面
	Set_Pos(40, 12);
	printf("欢迎来到贪吃蛇小游戏");
	Set_Pos(42, 25);
	system("pause");
	system("cls");
	//功能介绍
	Set_Pos(37, 12);
	printf("用↑↓← →分别控制蛇的移动");
	Set_Pos(32, 13);
	printf("F3为加速,F4为减速,加速可获得更高的分数\n");
	Set_Pos(42, 25);
	system("pause");
	system("cls");
}
void CreateMap()
{
	Set_Pos(0, 0);
	for (int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
	for (int i = 1; i <= 25; i++)
	{
		Set_Pos(0, i);
		wprintf(L"%lc", WALL);
	}
	for (int i = 1; i <= 25; i++)
	{
		Set_Pos(56, i);
		wprintf(L"%lc", WALL);
	}
	Set_Pos(0, 26);
	for (int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
}
void PrintHelp(pSnake ps)
{
	Set_Pos(68, 5);
	printf("总分:%5d  食物分数:%02d", ps->Score, ps->Foodweiht);
	Set_Pos(75, 12);
	printf("HELP");
	Set_Pos(65, 15);
	printf("1.用↑↓← →分别控制蛇的移动");
	Set_Pos(65, 16);
	printf("2.F3为加速,F4为减速");
	Set_Pos(65, 17);
	printf("3.空格暂停,ESC退出");
	Set_Pos(65, 18);
	printf("2.加速可获得更高分数");
	Set_Pos(67, 22);
	printf("版权@吕涛涛");
}
void GameStart()
{
	//设置控制台样式
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	//输入输出本地化
	setlocale(LC_ALL, "");
	//隐藏光标
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);
	CursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(handle, &CursorInfo);
	//打印欢迎界面
	WelcomeToGame();
}
void SnakeInit(pSnake ps)
{
	pSnakeNode cur=ps->psnake;
	for (int i = 0; i < 5; i++)
	{
		cur = (pSnakeNode)malloc(sizeof(SnakeNode));
		if (cur == NULL)
		{
			perror("Init malloc");
			exit(1);
		}
		cur->x = 24 + i * 2;
		cur->y = 5;
		cur->next = ps->psnake;
		ps->psnake = cur;
	}
	ps->dir = RIGHT;
	ps->Score = 0;
	ps->Sleep = 100;
	ps->status = RUN;
	ps->Foodweiht = 10;
	ps->pfood = NULL;
}
void PrintSnake(pSnake ps)
{
	pSnakeNode cur = ps->psnake;
	while (cur)
	{
		Set_Pos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
}
void SnakeMove(pSnake ps)
{
	pSnakeNode new = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (new == NULL)
	{
		perror("new malloc");
		return;
	}
	if (ps->dir == RIGHT)
	{
		new->x = ps->psnake->x + 2;
		new->y = ps->psnake->y;
	}
	else if (ps->dir == LEFT)
	{
		new->x = ps->psnake->x - 2;
		new->y = ps->psnake->y;
	}
	else if (ps->dir == UP)
	{
		new->x = ps->psnake->x;
		new->y = ps->psnake->y - 1;
	}
	else if (ps->dir == DOWN)
	{
		new->x = ps->psnake->x;
		new->y = ps->psnake->y + 1;
	}
	if (new->x == ps->pfood->x && new->y == ps->pfood->y)
	{
		ps->Score += ps->Foodweiht;
		new->next = ps->psnake;
		CreateFood(ps);
		new->next = ps->psnake;
		ps->psnake = new;
		Set_Pos(new->x, new->y);
		wprintf(L"%lc", BODY);
		return;
	}
	//有没有撞墙
	if (new->x == 0 || new->x == 56 || new->y == 0 || new->y == 26)
	{
		ps->status = KILL_BY_WALL;
		free(new);
		return;
	}
	//是否撞到自身
	pSnakeNode cur = ps->psnake->next->next;
	int f = 1;
	while (cur)
	{
		if (new->x == cur->x && cur->y == new->y)
		{
			f = 0;
			ps->status = KILL_BY_SELF;
			break;
		}
		cur = cur->next;
	}
	//没有撞到
	if (f)
	{
		cur = ps->psnake;
		while (cur->next->next)
		{
			cur = cur->next;
		}
		Set_Pos(cur->next->x, cur->next->y);
		printf("  ");
		free(cur->next);
		cur->next = NULL;
	}
	else
		return;
	//判断下一个点是不是食物
	new->next = ps->psnake;
	ps->psnake = new;
	Set_Pos(new->x, new->y);
	wprintf(L"%lc", BODY);
}
void CreateFood(pSnake ps)
{
	int x = 0;
	int y = 0;
again:
	do
	{
		x = rand() % 53 + 2;
		y = rand() % 25 + 1;
	} while (x % 2 != 0);
	pSnakeNode cur = ps->psnake;
	//判断食物有没有在蛇上
	while (cur)
	{
		if (cur->x == x && cur->y == y)
			goto again;
		cur = cur->next;
	}
	pSnakeNode food = (pSnakeNode)malloc(sizeof(SnakeNode));
	if (food == NULL)
	{
		perror("food mallooc");
		return;
	}
	food->x = x;
	food->y = y;
	food->next = NULL;
	ps->pfood = food;
	Set_Pos(x, y);
	wprintf(L"%lc", L'▲');
}
void GameRun(pSnake ps)
{
	//初始化
	SnakeInit(ps);
	//打印地图
	CreateMap();
	//打印食物
	CreateFood(ps);
	//打印蛇
	PrintSnake(ps);
	char a = 0;
	do
	{
		//打印得分和帮助信息
		PrintHelp(ps);
		Sleep(ps->Sleep);
		if (KEY_PRESS(VK_UP) && ps->dir != DOWN)
			ps->dir = UP;
		else if (KEY_PRESS(VK_DOWN) && ps->dir != UP)
			ps->dir = DOWN;
		else if (KEY_PRESS(VK_LEFT) && ps->dir != RIGHT)
			ps->dir = LEFT;
		else if (KEY_PRESS(VK_RIGHT) && ps->dir != LEFT)
			ps->dir = RIGHT;
		else if (KEY_PRESS(VK_SPACE))
		{
			while (1)
			{
				if (KEY_PRESS(VK_SPACE))
					break;
			}
		}
		else if (KEY_PRESS(VK_F3))
		{
			if (ps->Sleep > 50)
			{
				ps->Sleep -= 30;
				ps->Foodweiht += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			if (ps->Foodweiht > 3)
			{
				ps->Sleep += 30;
				ps->Foodweiht -= 2;
			}
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->status = EXIT;
		}
		SnakeMove(ps);
	} while (ps->status == RUN);
}
void GameEnd(pSnake ps)
{
	Set_Pos(25, 10);
	if (ps->status == KILL_BY_WALL)
	{
		printf("撞到墙了");
	}
	else if (ps->status == KILL_BY_SELF)
	{
		printf("撞到自己了");
	}
	else if (ps->status == EXIT)
	{
		printf("退出");
	}
	pSnakeNode cur = ps->psnake;
	while (ps->psnake)
	{
		cur = ps->psnake->next;
		free(ps->psnake);
		ps->psnake = cur;
	}
}