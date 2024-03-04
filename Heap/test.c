#include"Heap.h"

int main()
{
	int arr[]= { 27,15,19,18,28,34,65,49,25,37 };
	Heap h1;
	int nums = sizeof(arr) / sizeof(arr[0]);
	HeapInit(&h1,arr,nums);
	for (int i = 0; i < nums; i++)
	{
		printf("%d ", h1._x[i]);
	}

	return 0;
}