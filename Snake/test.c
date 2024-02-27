#include"Snake.h"


int main()
{
	int f = 0;
	do
	{
		srand((unsigned int)time(NULL));
		struct Snake snake = { 0 };
		GameStart();
		GameRun(&snake);
		GameEnd(&snake);
		Set_Pos(20, 19);
		printf("是否重新开始(Y/N)\a");
		while (1)
		{
			if (KEY_PRESS(0x59))
			{
				f = 1;
				break;
			}
			else if (KEY_PRESS(0x4E))
			{
				f = 0;
				break;
			}
				
		}
	} while (f);
	Set_Pos(0, 27);
	return 0;
}