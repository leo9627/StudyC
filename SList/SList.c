#include"SList.h"
void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}
//ͷ������ɾ��/β������ɾ��
SLTNode* SLTBuy(SLTDataType x)
{
	SLTNode* new = (SLTNode*)malloc(sizeof(SLTNode));
	assert(new);
	new->data = x;
	new->next = NULL;
	return  new;
}
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		SLTPushFront(pphead,x);
		return;
	}
	SLTNode* new = SLTBuy(x);
	SLTNode* temp = *pphead;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* new = SLTBuy(x);
	new->next = *pphead;
	*pphead = new;
}
void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		return;
	}
	SLTNode* temp = *pphead;
	while (((temp)->next)->next)
	{
		temp = temp->next;
	}
	free(temp->next);
	temp->next = NULL;
}
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* temp = (*pphead)->next;
	free(*pphead);
	*pphead = temp;
}

//����
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	while (phead)
	{
		if (phead->data == x)
		{
			return phead;
		}
		phead = phead->next;
	}
	return phead;
}
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);
	if (*pphead == pos)
	{
		SLTPushFront(pphead,x);
		return;
	}
	SLTNode* temp=*pphead;
	while (temp->next != pos)
	{
		temp = temp->next;
	}
	SLTNode* new = SLTBuy(x);
	new->next = pos;
	temp->next = new;
}
//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);
	if (*pphead == pos)
	{
		*pphead = (*pphead)->next;
		free(pos);
		pos = NULL;
		return;
	}
	SLTNode* temp = *pphead;
	while (temp->next->next != pos)
	{
		temp = temp->next;
	}
	temp->next = pos->next;
	free(pos);
	pos = NULL;
}
//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* new = SLTBuy(x);
	new->next = pos->next;
	pos->next = new;
}
//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLTNode* temp = pos->next;
	pos->next = pos->next->next;
	free(temp);
	temp = NULL;
}
//��������
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	while (*pphead)
	{
		SLTNode* temp = (*pphead)->next;
		free(*pphead);
		*pphead = temp;
	}
}