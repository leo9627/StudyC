#include"Stack.h"
void Test1()
{
	Stack s1;
	StackInit(&s1);
	StackPush(&s1, 1);
	StackPush(&s1, 2);
	StackPush(&s1, 3);
	StackPush(&s1, 4);
	StackPush(&s1, 5);
	StackPop(&s1);
	StackPop(&s1);
	StackPop(&s1);
	//StackPop(&s1);
	//int size = StackEmpty(&s1);
	int size = StackTop(&s1);
	printf("%d", size);
}

int main()
{
	//Test1();
	return 0;
}