#include"list.h"

void test()
{
	List* head = ListInit();
	ListPushBack(head, 1);
	ListPushBack(head, 2);
	ListPushBack(head, 3);
	ListPushBack(head, 4);
	ListPushFront(head, 100);
	ListDestroy(&head);
	ListPrint(head);
	List* pos = ListPosFind(head, 100);
	ListInsert(pos, 500);
	ListPrint(head);
	List* pos1 = ListPosFind(head, 1);
	ListErase(pos1);
	ListPrint(head);
	/*ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);*/
	//ListPopBack(head);
	//ListPopBack(head);
	//ListPopBack(head);
	//ListPopBack(head);
	//ListPrint(head);
}
int main()
{
	test();
	return 0;
}