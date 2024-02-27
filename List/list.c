#include"list.h"
List* ListBuy(ListDataType x)
{
	List* new = (List*)malloc(sizeof(List));
	if (new == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	new->data = x;
	new->next = new->prev = new;
	return new;
}
List* ListInit()
{
	List* head = ListBuy(-1);
	return head;
}
void ListPushBack(List* phead,ListDataType x)
{
	List* new = ListBuy(x);
	new->next = phead;
	new->prev = phead->prev;
	phead->prev->next = new;
	phead->prev = new;
}
void ListPushFront(List* phead, ListDataType x)
{
	assert(phead);
	List* new = ListBuy(x);
	new->next = phead->next;
	new->prev = phead;
	phead->next->prev = new;
	phead->next = new;
}
void ListPopBack(List* phead)
{
	assert(phead);
	assert(phead->next != phead);
	phead->prev->prev->next = phead;
	List* temp = phead->prev;
	phead->prev = phead->prev->prev;
	free(temp);
}
void ListPopFront(List* phead)
{
	assert(phead);
	assert(phead->next != phead);
	phead->next->next->prev = phead;
	List* temp = phead->next;
	phead->next = phead->next->next;
	free(temp);
}
List* ListPosFind(List* phead, ListDataType x)
{
	assert(phead);
	List* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
			return pcur;
		pcur = pcur->next;
	}
	return NULL;
}
void ListInsert(List* pos, ListDataType x)
{
	assert(pos);
	List* new = ListBuy(x);
	new->prev = pos;
	new->next = pos->next;
	pos->next->prev = new;
	pos->next = new;
}
void ListErase(List* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}
void ListDestroy(List** phead)
{
	List* next = NULL;
	List* pcur = (*phead)->next;
	while (pcur != *phead)
	{
		next = pcur->next;
		free(pcur);
		pcur = NULL;
		pcur = next;
	}
	free(pcur);
	*phead = NULL;
}
void ListPrint(List* phead)
{
	assert(phead);
	List* pcur = phead->next;
	while (pcur != phead)
	{
		printf("%d ", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}