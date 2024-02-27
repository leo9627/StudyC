#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include"Contact.h"
typedef  Info SLType;
typedef struct SQL
{
	SLType* arr;
	int size;
	int capacity;
}SL;
//初始化
void SLInit(SL* ps);
//销毁
void SLDestroy(SL* ps);
//打印
void SLPrint(SL* ps);
//检查 扩容
void SLcheck(SL* ps);
//前后增加
void SLPushBack(SL* ps, SLType x);
void SLPushFront(SL* ps, int x);
//插入
void SLIsert(SL* ps, int pos, int x);
//删除
void SLPop(SL* ps, int pos);
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
//查找
int SLFind(SL* ps, SLType x);
