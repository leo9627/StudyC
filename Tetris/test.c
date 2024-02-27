#include"Tetris.h"

int main()
{
	setlocale(LC_ALL, "");
	Tetris tetris= { 0 };
	struct OShape oshape = { 2,17};
	Init(&tetris);
	Print(&tetris);
	int a = 5;
	int b = 2;
	int c = 2;
	while (a)
	{
		Era_OShape(&oshape, &tetris);
		oshape.x = b;
		Put_OShape(&oshape, &tetris);
		Print1(&tetris);
		b++;
		Sleep(150);
	}
	return 0;
}