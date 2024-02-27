#pragma once
#define w 3
#define h 3
#define ws w+2
#define hs h+2
#define num 4
#define ch 5



#include<stdio.h>
#include<time.h>

void menu();
void init(char arr[ws][hs], char a);
void display(char arr[ws][hs], int x, int y);
void fix(char arr[ws][hs], int x, int y);
void game();