#include"Sort.h"
#include"Stack.h"
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
int MidIndex(int* arr, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (arr[begin] > arr[mid])
	{
		if (arr[begin] < arr[end])
			return begin;
		if (arr[mid] > arr[end])
			return mid;
		return end;
	}
	else//arr[begin] <= arr[mid]
	{
		if (arr[begin] > arr[end])
			return begin;
		if (arr[mid] < arr[end])
			return mid;
		return end;
	}
}
int PartSort1(int* arr, int begin, int end)
{
	int midIndex = MidIndex(arr, begin, end);
	Swap(&arr[midIndex], &arr[end]);
	int keyIndex=end;
	while (begin < end)
	{
		while (begin < end && arr[begin] <= arr[keyIndex])
			begin++;

		while (begin < end && arr[end] >= arr[keyIndex])
			end--;
		Swap(&arr[begin], &arr[end]);
	}
	Swap(&arr[begin], &arr[keyIndex]);
	return begin;
}
int PartSort2(int* arr, int begin, int end)
{
	int midIndex = MidIndex(arr, begin, end);
	Swap(&arr[midIndex], &arr[end]);
	int key = arr[end];
	while (begin < end)
	{
		while (begin < end && arr[begin] <= key)
			begin++;
		arr[end] = arr[begin];
		while (begin < end && arr[end] >= key)
			end--;
		arr[begin] = arr[end];
	}
	arr[begin] = key;
	return begin;
}
int PartSort3(int* arr, int begin, int end)
{
	int cur = begin;
	int prev = begin-1;
	int key = arr[end];
	while (cur <= end)
	{
		if (arr[cur] < key && arr[++prev] != arr[cur])
			Swap(&arr[prev], &arr[cur]);
		cur++;
	}
	Swap(&arr[++prev], &arr[end]);
	return prev;
}
void QuickSort(int* arr, int n)
{
	if (n <= 1)
		return;
	if (n > 10)
	{
		int div = PartSort3(arr, 0, n - 1);
		QuickSort(arr, div);
		QuickSort(arr + div + 1, n - 1 - div);
	}
	else
	{
		ShellSort(arr, n);
	}
}
void QuickSortNonR(int* arr, int n)
{

	Stack s1;
	StackInit(&s1);
	StackPush(&s1,0);
	StackPush(&s1, n-1);
	while (!StackEmpty(&s1))
	{
		int right = StackTop(&s1);
		StackPop(&s1);
		int left = StackTop(&s1);
		StackPop(&s1);
		int div=PartSort3(arr, left, right);
		if (left<div-1)
		{
			StackPush(&s1, left);
			StackPush(&s1, div - 1);
		}
		if (div+1<right)
		{
			StackPush(&s1, div-1);
			StackPush(&s1, right);
		}
	}
	StackDestory(&s1);
}
void MergeArr(int* arr, int begin1, int end1,int begin2,int end2, int* temp)
{
	int left = begin1;
	int right = end2;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
			temp[i++] = arr[begin1++];
		else
			temp[i++] = arr[begin2++];
	}
	while (begin1 <= end1)
		temp[i++] = arr[begin1++];
	while (begin2 <= end2)
		temp[i++] = arr[begin2++];
	for (int j = left; j <= right; j++)
	{
		arr[j] = temp[j];
	}
}
void _MergeSort(int* arr, int left, int right,int* temp)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	_MergeSort(arr, left, mid,temp);
	_MergeSort(arr, mid + 1, right, temp);
	MergeArr(arr, left, mid, mid + 1, right, temp);
}
void MergeSort(int* arr, int n)
{
	int mid = n / 2;
	int* temp = (int*)malloc(sizeof(int) * n);
	_MergeSort(arr, 0, n - 1, temp);
	free(temp);
}
void MergeSortNonR(int* arr, int n)
{
	int* temp = (int*)malloc(sizeof(int) * n);
	int gap = 1;
	while (gap <n)
	{

		for (int i = 0; i < n; i=i+2*gap)
		{
			int begin1 = i;
			int end1 = i + gap - 1;
			int begin2 = i + gap;
			int end2 = i + 2 * gap - 1;
			if (begin2 >= n)
				break;
			if (end2 >= n)
				end2 = n - 1;
			MergeArr(arr, begin1,end1,begin2,end2,temp);
		}
		PrintArray(arr, n);
		gap *= 2;
	}
	free(temp);
}

void TwoFileMerge(const char* file1, const char* file2,const char* file3)
{
	FILE* F1 = fopen(file1, "r");
	FILE* F2 = fopen(file2, "r");
	FILE* Fout = fopen(file3, "w");
	int n1 = 0;
	int n2 = 0;
	int ret1 = fscanf(F1, "%d", &n1) ;
	int ret2 = fscanf(F2, "%d", &n2);
	while (ret1!= EOF && ret2!= EOF)
	{
		if (n1 < n2)
		{
			fprintf(Fout, "%d\n", n1);
			ret1 = fscanf(F1, "%d", &n1);
		}
		else
		{
			fprintf(Fout, "%d\n", n2);
			ret2 = fscanf(F2, "%d", &n2);
		}
	}
	while (ret1 != EOF)
	{
		fprintf(Fout, "%d\n", n1);
		ret1 = fscanf(F1, "%d", &n1);
	}
	while (ret2 != EOF)
	{
		fprintf(Fout, "%d\n", n2);
		ret2 = fscanf(F1, "%d", &n2);
	}
	fclose(F1);
	fclose(F2);
	fclose(Fout);
}
void FileMergeSort(const char* file)
{
	FILE* fin = fopen(file, "r");
	char filename[20];
	int num = 0;
	int arr[20];
	int i = 0;
	int n = 0;
	while (1)
	{
		if (i < 20)
		{
			if (fscanf(fin, "%d", &num) != EOF)
				arr[i++] = num;
			else
				break;
		}
		else
		{
			sprintf(filename, "sub\\%d.txt", n);
			n++;
			FILE* fout = fopen(filename, "w");
			for (int j = 0; j < 20; j++)
			{
				QuickSort(arr, 20);
				fprintf(fout, "%d\n", arr[j]);
			}
			fclose(fout);
			i = 0;
		}
	}
	n--;
	if (i > 0)
	{
		n++;
		sprintf(filename, "sub\\%d.txt", n);
		FILE* fout = fopen(filename, "w");
		for (int j = 0; j < i; j++)
		{
			QuickSort(arr, i);
			fprintf(fout, "%d\n", arr[j]);
		}
		fclose(fout);
	}

	char c1[] = "sub\\";
	char mFile[100] = "0";
	char meFile[100] = "";
	char file1[100]="sub\\0.txt";
	char file2[100];
	for (int j = 1; j <= n; j++)
	{
		char temp[100];
		sprintf(temp, "%s", mFile);
		sprintf(mFile, "%s%d", temp,j);
		sprintf(meFile, "%s%s.txt", c1,mFile );
		sprintf(file2, "sub\\%d.txt", j);
		TwoFileMerge(file1, file2, meFile);
		strncpy(file1, meFile,sizeof(char)*100);
	}
}
void CountSort(int* a, int n)
{
	assert(a);
	assert(n);
	int min = a[0];
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min + 1;
	int* coutArr = (int*)malloc(sizeof(int) * range);
	if (coutArr == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	memset(coutArr, 0, sizeof(int)*range);
	for (int i = 0; i < n; i++)
	{
		coutArr[a[i] - min]++;
	}
	int index = 0;
	for (int i = 0; i < range; i++)
	{
		while (coutArr[i]--)
		{
			a[index++] = i + min;
		}
	}
	free(coutArr);
}