#include"Tetris.h"

void SetPos(int x,int y)
{
	COORD pos = { x,y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, pos);
}
void Init(pTetris ps)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO p;
	GetConsoleCursorInfo(handle,&p);
	p.bVisible = FALSE;
	SetConsoleCursorInfo(handle, &p);
	ps->score = 0;
	ps->states = RUN;
	//创建数组
	int** p1 = (int**)malloc(sizeof(int*)*SIZE);
	if (p1 == NULL)
	{
		perror("malloc");
		exit(1);
	}
	ps->arr = p1;
	for (int i = 0; i < SIZE; i++)
	{
		int* new = (int*)malloc(sizeof(int*) * SIZE);
		if (new == NULL)
		{
			perror("malloc");
			exit(1);
		}
		p1[i] = new;
	}
	//把数据填入数组
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			p1[i][j] = 0;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		p1[SIZE - 1][i] = 1;
	}
	for (int i = 0; i < SIZE; i++)
	{
		p1[i][SIZE - 1] = 1;
	}
	for (int i = 0; i < SIZE; i++)
	{
		p1[i][0] = 1;
	}
}
void Print(pTetris ps)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (ps->arr[i][j] == 1)
				wprintf(L"%lc", SQUARE);
			else
				printf("  ");
			//printf("%d ", ps->arr[i][j]);
		}
		printf("\n");
	}
}
void Put_OShape(pOShape ps,pTetris pr)
{
	pr->arr[ps->x][ps->y] = 1;
	//Print(pr);
	pr->arr[ps->x+1][ps->y] = 1;
	//Print(pr);
	pr->arr[ps->x][ps->y+1] = 1;
	//Print(pr);
	pr->arr[ps->x+1][ps->y+1] = 1;
	//Print(pr);
}
void Era_OShape(pOShape ps, pTetris pr)
{
	pr->arr[ps->x][ps->y] = 0;
	//Print(pr);
	pr->arr[ps->x + 1][ps->y] = 0;
	//Print(pr);
	pr->arr[ps->x][ps->y + 1] = 0;
	//Print(pr);
	pr->arr[ps->x + 1][ps->y + 1] = 0;
}
void Print1(pTetris ps)
{
	for (int i = 0; i < SIZE-1; i++)
	{
		for (int j = 1; j < SIZE-1; j++)
		{
			SetPos(j*2, i);
			if (ps->arr[i][j] == 1)
				wprintf(L"%lc", SQUARE);
			else
				printf("  ");
			//printf("%d ", ps->arr[i][j]);
		}
		printf("\n");
	}
}