#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ListDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	ListDataType data;
	struct ListNode* next;
}List;

List* ListBuy(ListDataType x);
List* ListInit();
void ListPushBack(List* phead, ListDataType x);
void ListPushFront(List* phead, ListDataType x);
void ListPopBack(List* phead);
void ListPopFront(List* phead);
List* ListPosFind(List* phead,ListDataType x);
void ListInsert(List* pos, ListDataType x);
void ListErase(List* pos);
void ListDestroy(List** phead);
void ListPrint(List* phead);