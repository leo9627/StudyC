#pragma once
//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<stdbool.h>
#include<time.h>
//#define WINDOWS_     //ʹ��windows����̨�򿪲��ö���WINDOWS_����ʹ���ն˴��붨��
#define KEY_PRESS(VK) ( (GetAsyncKeyState(VK) & 0x1) ? 1 : 0 )
#if defined(WINDOWS_)
#define WALL L'ǽ'
#else
#define WALL L'��'
#endif
#define BODY L'��'
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};
enum GAME_STATUS
{
	RUN=1,
	EXIT,
	KILL_BY_WALL,
	KILL_BY_SELF
};
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;
typedef struct Snake
{
	pSnakeNode psnake;
	pSnakeNode pfood;
	int Score;
	int Foodweiht;
	int Sleep;
	enum GAME_STATUS status;   //��Ϸ״̬
	enum DIRECTION dir;  //����
}*pSnake;
void Set_Pos(int x, int y);
void WelcomeToGame();
void CreateMap();
void PrintHelp(pSnake ps);
void GameStart();
void SnakeInit(pSnake ps);
void PrintSnake(pSnake ps);
void SnakeMove(pSnake ps);
void CreateFood(pSnake ps);
void GameRun(pSnake ps);
void GameEnd(pSnake ps);