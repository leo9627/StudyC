#include"Queue.h"

void QueueInit(pQueue pq)
{
	pq->_head = pq->_ptail = NULL;
}
void QueuePush(pQueue pq,QDataType x)
{
	pQueuNode new = (pQueuNode)malloc(sizeof(QueueNode));
	if (new == NULL)
		exit(-1);
	new->_next = NULL;
	new->_x = x;
	if (pq->_head == NULL)
	{
		pq->_head = pq->_ptail = new;
		return;
	}
	pq->_ptail->_next = new;
	pq->_ptail = new;
}
void QueuePop(pQueue pq)
{
	assert(pq);
	assert(pq->_head);
	pQueuNode next = pq->_head->_next;
	free(pq->_head);
	pq->_head = next;
}
QDataType QueueFront(pQueue pq)
{
	assert(pq);
	assert(pq->_head);
	return pq->_head->_x;
}
QDataType QueueBack(pQueue pq)
{
	assert(pq);
	assert(pq->_head);
	return pq->_ptail->_x;
}
bool QueueEmpty(pQueue pq)
{
	return pq->_head == NULL ? true : false;
}
int QueueSize(pQueue pq)
{
	int size = 0;
	pQueuNode cur = pq->_head;
	while (cur)
	{
		size++;
		cur = cur->_next;
	}
	return size;
}
void QueueDestory(pQueue pq)
{
	pQueuNode next = NULL;
	while (pq->_head)
	{
		next = pq->_head->_next;
		free(pq->_head);
		pq->_head = next;
	}
	pq->_ptail = NULL;
}