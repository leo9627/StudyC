#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* _arr;
	int _top;
	int _capacity;
}Stack,*pStack;

void StackInit(pStack ps);
void StackPush(pStack ps,STDataType x);
void StackPop(pStack ps);
STDataType StackTop(pStack ps);
int StackEmpty(pStack ps);
int StackSize(pStack ps);
void StackDestory(pStack ps);
