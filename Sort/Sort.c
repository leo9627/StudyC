#include"Sort.h"
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void PrintArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int temp = arr[end+1];
		//[0,end]里是有序的，把end+1的数插入里面
		while (end >= 0)
		{
			if (temp < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = temp;
	}
}
void ShellSort(int* arr, int n)
{
	int grap = n;
	while (grap > 1)
	{
		grap = grap / 3 + 1;
		//加一是为了保证最后grap一定是1
		for (int i = 0; i < n - grap; i++)
		{
			int end = i;
			int temp = arr[end + grap];//最巧
			while (end >= 0)
			{
				if (temp < arr[end])
				{
					arr[end + grap] = arr[end];
					end -= grap;
				}
				else
				{
					break;
				}
			}
			arr[end + grap] = temp;
		}
	}
}
void SelectSort(int* arr, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		int maxi, mini;
		maxi = mini = left;
		for (int i = left+1; i <= right; i++)
		{
			if (arr[i] > arr[maxi])
				maxi = i;
			else if(arr[i]<arr[mini])
				mini = i;
		}
		Swap(&arr[right], &arr[maxi]);
		//如果right==mini的话，上面进行交换就会
		// 把mini里最小的数换到maxi的位置
		//所以下面要对mini进行更新
		if (right == mini)
			mini = maxi;
		Swap(&arr[left], &arr[mini]);
		left++;
		right--;
	}
}
void AdjustDown(int* arr, int n,int root)
{
	int parent = root;
	int child = root * 2 + 1;
	while (child<n)
	{
		if (child<n-1&&arr[child] < arr[child + 1])
			child++;
		if (arr[parent] < arr[child])
		{
			Swap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}	
		else
		{
			break;
		}
	}
}
void HeapSort(int* arr, int n)
{
	//n-1是下标，通过下标找到父节点
	for (int i = ((n - 1) - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);
		end--;
	}
}
void BubbleSort(int* arr, int n)
{
	int end = n - 1;
	while (end)
	{
		int f = 1;
		for (int i = 0; i < end; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				Swap(&arr[i + 1], &arr[i]);
				f = 0;
			}
				
		}
		if (f)
			break;
		end--;
	}
}
