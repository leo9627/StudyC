#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int ListNodeData;
typedef struct ListNode
{
	struct ListNode* prev;
	ListNodeData x;
	struct ListNode* next;
}ListNode;

void ListPushBack(ListNode* phead, ListNodeData x);
void ListPopBack(ListNode* phead);