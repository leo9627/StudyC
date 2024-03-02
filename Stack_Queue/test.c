#include"Stack.h"
#include"Queue.h"
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
void Test2()
{
	Queue q1;
	QueueInit(&q1);
	QueuePush(&q1, 1);
	QueuePush(&q1, 2);
	QueuePush(&q1, 3);
	QueuePush(&q1, 4);
	QueuePush(&q1, 5);
	/*QueuePop(&q1);
	QueuePop(&q1);
	QueuePop(&q1);
	QueuePop(&q1);
	QueuePop(&q1);*/
	int size = QueueEmpty(&q1);
	printf("%d ", size);
	/*while (!QueueEmpty(&q1))
	{
		printf("%d ", QueueTop(&q1));
		QueuePop(&q1);
	}*/
	QueueDestory(&q1);
}
int main()
{
	Test2();
	return 0;
}