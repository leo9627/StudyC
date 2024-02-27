#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新输入");
			break;
		}
	} while (input);
	return 0;
}