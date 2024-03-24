#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


void Swap(int* x, int* y);
void PrintArray(int* arr, int n);
void InsertSort(int* arr, int n);
void ShellSort(int* arr, int n);
void SelectSort(int* arr, int n);
void AdjustDown(int* arr, int n,int root);
void HeapSort(int* arr, int n);
void BubbleSort(int* arr, int n);
int PartSort1(int* arr, int begin, int end);
int PartSort2(int* arr, int begin, int end);
int PartSort3(int* arr, int begin, int end);
void QuickSort(int* arr, int n);
void QuickSortNonR(int* arr, int n);
void MergeSort(int* arr, int n);
void MergeSortNonR(int* arr, int n);
void FileMergeSort(const char* file);
