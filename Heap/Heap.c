#include"Heap.h"

void Swap(HPDataType* x,HPDataType* y)
{
	HPDataType temp = *y;
	*y = *x;
	*x = temp;
}
//��С�ѣ����µ�����ǰ���Ǹ������������Ѿ���С��
//���µ����㷨
void AdjustDown(HPDataType* arr,int nums, int root)
{
	int parent = root;
	int child = parent * 2 + 1;  //�ҵ�����
	while (child < nums)
	{
		if (child<nums - 1 && arr[child] > arr[child + 1])    //�ҵ���С�ĺ���
		{
			child++;
		}
		if (arr[parent] > arr[child])  //������ӱȸ��ڵ�С���ͽ���
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
	//�����鸴�ƹ���
	php->_x = (HPDataType*)malloc(sizeof(HPDataType) * nums);
	if (php->_x == NULL)
		exit(-1);
	memcpy(php->_x, arr, sizeof(HPDataType) * nums);
	php->_capacity = php->_size = nums;

	//����Ϊ��
	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)//��С���ϵ���ΪС�ѣ��ӵ�һ�����ڵ㿪ʼ����
	{											//���һ���ڵ�Ϊi���丸�ڵ�Ϊ��i-1��/2
		AdjustDown(php->_x,nums, i);			//���ڵ�Ϊi������Ϊ2*i+1���Һ���Ϊ2*i+2
	}											//���Ͻ�������ȫ�������ж�����
}
void HeapSort(int* arr, int nums) //������
{
	//��С��
	for (int i = (nums - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr, nums, i);
	}
	//�����д�����
	int end = nums - 1;   //��������β��
	while (end)
	{
		Swap(&arr[0], &arr[end]);   //����������
		AdjustDown(arr, end, 0);//���µĶѽ������µ���
		//��endǰ�����������µ���
		//�����end�ǽ������µ��������ָ������൱�ڰ��ź������
		// �����ڶ���
		end--;
	}
}
void HeapSort1(int* arr, int nums)
{
	//��С��
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