#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _x;
	int _size;
	int _capacity;
}Heap,*pHeap;

void HeapInit(pHeap php,HPDataType* arr,int nums);
void HeapPush(pHeap php, HPDataType x);
void HeapPop(pHeap php);
void HeapDestory(pHeap php);