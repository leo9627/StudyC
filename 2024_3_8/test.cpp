#include<iostream>
#include<cstdlib>
#include<cassert>
using namespace std;
void Test1()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	int max = a > b ? a : b;
	max = max > c ? max : c;
	cout << max;
}
void Test2()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int max = a > b ? a : b;
	int min= a < b ? a : b;
	int temp = max;
	while (max % min)
	{
		max =max+temp;
	}
	cout << max;
}
void Test3()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	for (int i = (a > b ? a : b); i >=1;i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << i;
			return;
		}
	}
}
void Test31()
{
	int a = 0;
	cin >> a;
	int s = 0;
	int n = 0;
	while (a)
	{
		s=s+(int)pow(2, n)*(a%10);
		a = a / 10;
		n++;
	}
	cout << s;
}
void Test4()
{
	int arr[3][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
	int goal = 0;
	cin >> goal;
	for (int i = 0; i < 3; i++)
	{
		if (arr[i][3] >= goal)
		{
			for (int j = 0; j < 4;j++)
			{
				if (arr[i][j] == goal)
				{
					cout << "true";
					return;
				}
			}
			cout << false;
			return;
		}
	}
	cout << "false";
}
void Test5()
{
	int n = 0;
	cin >> n;
	if (n <= 0)
		exit(-1);
	int** arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0;i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);
		if (arr[i] == NULL)
			exit(-1);
	}
	int m = (n+1)/2;
	int k = 1;
	int f = 0;
	while (f<m)
	{
		for (int j = f; j <= (n - 1-f); j++)
		{
			arr[f][j]=k;
			k++;
		}
		for (int i = f+1; i <=(n - 1 - f); i++)
		{
			arr[i][n-1-f] = k;
			k++;
		}
		for (int j = (n-1-f-1); j >=f; j--)
		{
			arr[n-1-f][j] = k;
			k++;
		}
		for (int i = n-1-f-1; i >f ;i--)
		{
			arr[i][f] = k;
			k++;
		}
		f++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j]<<"\t";

		}
		cout << "\n\n";
	}
	for (int i = 0; i < n; i++)
	{
		free(arr[i]);
	}
	free(arr);
	arr = NULL;
}
void Test6()
{
	int i = 0;
	int array[3] = { 0 };
	for (; i < 3; i++)
	{
		array[i] = 0;
		cout << "Reapect !!" << endl;
	}
	cout << array<<endl;
	cout << array+1 << endl;
	cout << array+2 << endl;
	cout << array+3;
}
void Test7()
{
	int m = 0;
	int n = 0;
	cin >> m >> n;
	int* arrA = (int*)malloc(sizeof(int) * (m + n));
	int* arrB = (int*)malloc(sizeof(int) *  n);
	assert(arrA);
	assert(arrB);
	for (int i = 0; i < m; i++)
	{
		cin >> arrA[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arrB[i];
	}
	int a = m - 1;
	int b = n - 1;
	int end = m + n - 1;
	while (a>=0 && b>=0)
	{
		if (arrA[a] > arrB[b])
		{
			arrA[end] = arrA[a];
			a--;
		}
			

		else
		{
			arrA[end] = arrB[b];
			b--;
		}
			
		end--;
	}
	while (b>=0)
	{
		arrA[end] = arrB[b];
		b--;
		end--;
	}
	for (int i = 0; i < m + n; i++)
	{
		cout << arrA[i] << " ";
	}
	free(arrA);
	free(arrB);
}
void Test8()
{
	int n = 0;
	cin >> n;
	int* arr = (int*)malloc(sizeof(int) * n);
	assert(arr);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int left = 0;
	int right = 1;
	int write = 0;
	while (right<n)
	{
		if (arr[left] != arr[right])
		{
			arr[write] = arr[left];
			write++;
		}
		left++;
		right++;	
	}
	arr[write] = arr[n - 1];
	for (int i = 0; i <= write; i++)
	{
		cout << arr[i]<<" ";
	}
	free(arr);
}
int main()
{
	Test5();
	return 0;
}