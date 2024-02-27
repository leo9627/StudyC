#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("*****   1.game   ******\n");
	printf("*****   0.exit   ******\n");
	printf("***********************\n");
}
void init(char arr[ws][hs],char a)
{
	for (int x = 0; x < ws; x++)
	{
		for (int y = 0; y < hs; y++)
			arr[x][y] = a;
	}
}
void display(char arr[ws][hs], int x, int y)
{
	for (int l = 0; l <= x; l++)
	{
		printf("%d ", l);
	}
	printf("\n");
	for (int i = 1; i <=x; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= y; j++)
			printf("%c ", arr[i][j]);
		printf("\n");
	}
}
int autofind(char arr[ws][hs], char arr1[ws][hs], int x, int y,int n)
{
	for (int i = y - 1; i <= y + 1; i = i + 2)
	{
		for (int j = x - 1; j <= x + 1; j = j + 2)
		{
			if (arr1[j][i] == '*')
			{
				if (sum(arr, j, i) == 0)
				{
					autofind(arr, arr1, j, i, n);
				}
				else
				{
					arr1[j][i] = sum(arr, j, i)+'0';
					n--;
				}
			}
		}
	}
	return n;
}
void fix(char arr[ws][hs], int x, int y)
{
	int count1 = num;
	while (count1)
	{
		int r1 = rand() % (w) + 1;
		int r2 = rand() % (w) + 1;
		if (arr[r1][r2] == '0')
		{
			arr[r1][r2] = '1';
			count1--;
		}
	}
}
int sum(char arr[ws][hs], int x, int y)
{
	return arr[x][y-1]+ arr[x][y + 1]+arr[x-1][y-1]+
		arr[x - 1][y ]+ arr[x - 1][y + 1]+ arr[x + 1][y] + 
		arr[x + 1][y + 1] + arr[x + 1][y - 1]-8*'0';
}
void findgmine(char arr[ws][hs], char arr1[ws][hs], int x, int y)
{
	int count = ch;
	int a = 0;
	int b = 0;
	while (count)
	{
		display(arr1, w, h);
		printf("ÊäÈë:");
		scanf("%d%d", &a, &b);
		if (arr[a][b] == '1')
		{
			printf("ÊäÁË\n");
			display(arr, w, h);
			break;
		}
		else
		{
			int s = sum(arr, a, b);
			arr1[a][b] = s + '0';
			count--;
			//printf("%d\n", count);
		}
	}
	if (count == 0)
		printf("Ó®ÁË\n");
}
void game()
{
	char mine[ws][hs];
	char show[ws][hs];
	init(mine, '0');
	init(show, '*');
	fix(mine, w, h);
	//display(mine, w, h);
	//display(show, w, h);
	findgmine(mine, show, w, h);
}