#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("����������");
			break;
		}
	} while (input);
	return 0;
}