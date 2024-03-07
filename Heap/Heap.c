#include"Heap.h"

void Swap(HPDataType* x,HPDataType* y)
{
	HPDataType temp = *y;
	*y = *x;
	*x = temp;
}
//建小堆，向下调整，前提是根的两个子树已经是小堆
//向下调整算法
void AdjustDown(HPDataType* arr,int nums, int root)
{
	int parent = root;
	int child = parent * 2 + 1;  //找到左孩子
	while (child < nums)
	{
		if (child<nums - 1 && arr[child] > arr[child + 1])    //找到最小的孩子
		{
			child++;
		}
		if (arr[parent] > arr[child])  //如果孩子比父节点小，就交换
		{
			Swap(&arr[parent], &arr[child]);
			parent = child;
			child = child * 2 + 1;
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
	if (php->_x == NULL)
		exit(-1);
	memcpy(php->_x, arr, sizeof(HPDataType) * nums);
	php->_capacity = php->_size = nums;

	//调整为堆
	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)//从小向上调整为小堆，从第一个父节点开始调整
	{											//如果一个节点为i，其父节点为（i-1）/2
		AdjustDown(php->_x,nums, i);			//父节点为i，左孩子为2*i+1，右孩子为2*i+2
	}											//以上结论在完全二叉树中都适用
}
void HeapSort(int* arr, int nums) //堆排序
{
	//建小堆
	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, nums, i);
	}
	//下面的写法最好
	int end = nums - 1;   //数组最后的尾标
	while (end)
	{
		Swap(&arr[0], &arr[end]);   //交换两个数
		AdjustDown(arr, end, 0);//对新的堆进行向下调整
		//把end前的数进行向下调整
		//上面的end是进行向下调整的数字个数，相当于把排好序的数
		// 不放在堆里
		end--;
	}
}
void HeapSort1(int* arr, int nums)
{
	//建小堆
	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, nums, i);
	}

	/*for (int i = 1; i < nums; i++)
	{
		Swap(&arr[0], &arr[nums-i]);
		AdjustDown(arr, nums-i, 0);
	}*/
	while (nums)
	{
		AdjustDown(arr, nums, 0);
		Swap(&arr[0], &arr[nums - 1]);
		nums--;
	}
}