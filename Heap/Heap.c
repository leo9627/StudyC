#include"Heap.h"

void swap(HPDataType* x,HPDataType* y)
{
	HPDataType temp = *y;
	*y = *x;
	*x = temp;
}
void AdjustDown(pHeap php, int root)
{
	int nums = php->_size;
	int parents = root;
	int children = parents * 2 + 1;
	while (children < nums)
	{
		if (children<nums - 1 && php->_x[children] > php->_x[children + 1])
		{
			children++;
		}
		if (php->_x[parents] > php->_x[children])
		{
			swap(&php->_x[parents], &php->_x[children]);
			parents = children;
			children = children * 2 + 1;
		}
		else
		{
			break;
		}
	}

}
void HeapInit(pHeap php, HPDataType* arr, int nums)
{
	//把数组复制过来
	php->_x = (HPDataType*)malloc(sizeof(HPDataType) * nums);
	memcpy(php->_x, arr, sizeof(HPDataType) * nums);
	php->_capacity = php->_size = nums;

	//调整顺序

	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php, i);
	}
}