#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


typedef int QDataType;
typedef struct QueueNode
{
	QDataType _x;
	struct QueueNode* _next;
}QueueNode,*pQueuNode;

typedef struct Queue
{
	pQueuNode _head;
	pQueuNode _ptail;
}Queue,*pQueue;

void QueueInit(pQueue pq);
void QueuePush(pQueue pq,QDataType x);
void QueuePop(pQueue pq);
QDataType QueueFront(pQueue pq);
QDataType QueueBack(pQueue pq);
bool QueueEmpty(pQueue pq);
int QueueSize(pQueue pq);
void QueueDestory(pQueue pq);
