#include"List.h"

void ListPopBack(ListNode* phead)
{
	assert(phead);
	if (phead->next == phead)
		return;
	ListNode* ptail = phead->prev;
	ListNode* prev = ptail->prev;
	free(ptail);
	prev->next = phead;
	phead->prev = prev;
}