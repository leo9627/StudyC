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
//��ʼ��
void SLInit(SL* ps);
//����
void SLDestroy(SL* ps);
//��ӡ
void SLPrint(SL* ps);
//��� ����
void SLcheck(SL* ps);
//ǰ������
void SLPushBack(SL* ps, SLType x);
void SLPushFront(SL* ps, int x);
//����
void SLIsert(SL* ps, int pos, int x);
//ɾ��
void SLPop(SL* ps, int pos);
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
//����
int SLFind(SL* ps, SLType x);
