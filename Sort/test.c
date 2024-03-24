#include"Sort.h"
void InsertSortTest()
{
	int arr[] = { 3,5,7,2,6,1,4,9,8,0 };
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void ShellSortTest()
{
	int arr[] = { 3,5,7,2,6,1,4,9,8,0 };
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void SelectSortTest()
{
	//int arr[] = { 3,5,7,2,6,1,4,9,8,0 };
	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	SelectSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void HeapSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void BubbleSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void QuickSortTest()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 12,22,1,4,3,2,90,100,3,5,2,6,8};
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	QuickSortNonR(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}
void MergeSortTest()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//int arr[] = { 12,22,1,4,3,2,90,100,3,5,2,6,8};
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
	MergeSortNonR(arr, sizeof(arr) / sizeof(arr[0]));
	PrintArray(arr, sizeof(arr) / sizeof(arr[0]));
}


int main()
{
	//InsertSortTest();
	//ShellSortTest();
	//SelectSortTest();
	//HeapSortTest();
	//BubbleSortTest();
	//QuickSortTest();
	//MergeSortTest();
	//FileMergeSort("1.txt");
	FileMerge("1.txt", "2.txt", "3.txt");
	return 0;
}