#include"SList.h"
SLTNode* partition(SLTNode* head, int x)
{
    SLTNode* small = NULL;
    SLTNode* big = NULL;
    SLTNode* temp = NULL;
    SLTNode* petail = NULL;
    while (head)
    {
        if (head->data >= x)
        {
            temp = head->next;
            head->next = big;
            big = head;
            head = temp;
        }
        else
        {
            if (small = NULL)
            {
                petail = head;
            }
            temp = head->next;
            head->next = small;
            small = head;
            head = temp;
        }
    }
    if (petail)
        petail->next = big;
    return small;
}
int main()
{
	SLTNode* plist = NULL;
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 5);
	SLTPushFront(&plist, 2);
	SLTPushFront(&plist, 3);
	SLTPushFront(&plist, 4);
	SLTPushFront(&plist, 1);
    SLTPrint(plist);
    SLTPrint(partition(plist, 3));
	/*SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);*/
	//SListDesTroy(&plist);
	
    //100->10->1->2->3->4->NULL
	//printf("%d", 6 / 2);
	//SLTInsert(&plist, pos, 50);
	//SLTInsertAfter(pos, 50);
	//SLTPrint(plist);//50->100->10->1->2->3->4->NULL
	/*SLTEraseAfter(pos);
	SLTPrint(plist);*/
	return 0;
}