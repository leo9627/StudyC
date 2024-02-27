#pragma once
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<locale.h>
#define SQUARE L'¡õ'
#define SIZE 25
enum GAME_STATES
{
	RUN,
	FAIL,
	EXIT
};
typedef struct Tetris
{
	int** arr;
	int score;
	enum GAME_STSTES states;
}Tetris,*pTetris;
typedef struct OShape
{
	int x;
	int y;
}OShape,*pOShape;
void SetPos(int x,int y);
void Init(pTetris ps);
void Print(pTetris ps);
void Put_OShape(pOShape ps, pTetris pr);
void Era_OShape(pOShape ps, pTetris pr);