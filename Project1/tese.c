#define _CRT_SECURE_NO_WARNINGS 1
#define FFF(type) \
type type##_max(type x,type y)\
{\
	return (x>y?x:y);\
}
#define PRINT(vale,type) printf("the vale of "#vale" is "type,vale)
#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

FFF(int)
FFF(double)
#define MAX 10
#define	N 4
#define Y(n) ((N+2)*n)

struct A
{
	char a;
	int b;
	int c;
};
#define SWAP(n) (  (( (n)&0x55555555 )<<1) |( ( (n)&0xaaaaaaaa ) >>1))
int main1()
{
	printf("%d", SWAP(2));
	//printf("%zd\n",offsetof(struct A, a));//offsetof(s,m) ((size_t)&( ( (s*)0 ) ->m))
	//printf("%zd\n", offsetof(struct A, b));
	//printf("%zd\n", offsetof(struct A, c));
	return 0;
}
//int main()
//{	
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d", z);
//	printf("%d\n", MAX);
//#undef MAX
//#define MAX 100
//	printf("%d\n", MAX);
//	float r = double_max(8.9, 8);
//	printf("%f", r);
//	printf("\n");
//	int a = 10;
//	PRINT(a, "%d");
//	return 0;
//}
//int add(int x)
//{
//	return x * x;
//}
//int main()
//{
//	//int (*p)(int) = add;
//	int a = add(2);
//	printf("%d", a);
//}
//int main() {
//    int i = 0;
//    int a = 0;
//    int s = 0;
//    scanf("%d", &s);
//    a = sqrt(s);
//    int f = 1;
//    for (i = 2; i <= a; i++)
//    {
//        if (s % a == 0)
//        {
//            f = 0;
//            printf("不是素数");
//            break;
//        }
//    }
//    if (f)
//        printf("是素数");
//    return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void p(int arr[],int sz)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		int f = 1;
//		for (int l = 0; l < 9 - i; l++)
//		{
//			if (arr[l] > arr[l + 1])
//			{
//				f = 0;
//				int temp = arr[l + 1];
//				arr[l + 1] = arr[l];
//				arr[l] = temp;
//			}
//		}
//		if (f)
//			break;
//	}
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	p(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void find_max_min(int arr[], int n, int* max, int* min) {
//    *max = arr[0];
//    *min = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > *max) {
//            *max = arr[i];
//        }
//        if (arr[i] < *min) {
//            *min = arr[i];
//        }
//    }
//}
//
//int main()
//{
//    int n;
//    printf("请输入整数个数：");
//    scanf("%d", &n);
//    int* arr = (int *)malloc(4 * n);
//    printf("请输入%d个整数：", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int max, min;
//    find_max_min(arr, n, &max, &min);
//    printf("最大值为：%d ", max);
//    printf("最小值为：%d ", min);
//    return 0;
//}
//int main()
//{
//	FILE* pf = fopen("txt1.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef", pf);
//	return 0;
//
//}
//int main()
//{
//	FILE* pfr = fopen("data.txt", "r");
//	FILE* pfw = fopen("data_copy.txt", "w");
//	if (pfr == NULL)
//	{
//		perror("open->data.txt");
//		return 1;
//	}
//	if (pfw == NULL)
//	{
//		perror("open->data_copy.txt");
//		fclose(pfr);
//		pfr = NULL;
//		return 1;
//	}
//	char ch = 0;
//	while ((ch=fgetc(pfr)) != EOF)
//	{
//		fputc(ch, pfw);
//	}
//	fclose(pfr);
//	fclose(pfw);
//	pfr =NULL;
//	pfw = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 1; i <= 8; i++)
//	{
//		fprintf(pf,"%d\n",i);
//	}
//	fclose(pf);
//	free(pf);
//	return 0;
//}
//int myaiot(char* s)
//{
//	int x = 0;
//	int a = 1;
//	while (*s == ' ')
//		s++;
//	if (*s == '-')
//	{
//		a = -1;
//		s++;
//	}
//	else if (*s == '+')
//	{
//		s++;
//	}
//	while (*s>='0' && *s<='9')
//	{
//		x = 10 * x + (*s - '0');
//		if (x < 0)
//		{
//			x = 2147483647;
//			break;
//		}
//		s++;
//	}
//	return x * a;
//}
//int main()
//{
//	int x = myaiot("8888.999");
//	printf("%d",x);
//	return 0;
//}
//int main()
//{
//    int (*arr)[5]=(int (*)[5])malloc(15 * sizeof(int));
//    if (arr == NULL)
//    {
//        perror("malloc");
//        return 1;
//    }
//    int c = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            c++;
//            arr[i][j] = c;
//        }
//    }
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            printf("%2d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    free(arr);
//    arr = NULL;
//    return 0;
//}
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    float inch =( a / 0.0508)*2;
//    int foot = (int)(inch / 12);
//    int in = (int)(inch - foot * 12);
//    printf("%d %d", foot, in);
//    return 0;
//}
//int main() {
//    for (int i = 10000; i <= 100000; i++)
//    {
//        int s = 0;
//        for (int j = 10; j <= 10000; j = j * 10)
//        {
//            s = s + (i / j) * (i % j);
//        }
//        if (s == i)
//        {
//            printf("%d ", s);
//        }
//    }
//    return 0;
//}
	//int main() {
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			i = -i;
//		}
//		sum += (1.0 / i);
//		if (i % 2 == 0) {
//			i = -i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}
//void* my_memmove(void* x, const void* y, size_t num)
//{
//	char* p1 = (char*)x;
//	char* p2 = (char*)y;
//	if (p1 < p2)
//	{
//		while (num--)
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(p1 + num) = *(p2 + num);
//		}
//	}
//	return x;
//}
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	my_memmove(str + 20, str + 15, 11);
//	printf("%s", str);
//	return 0;
//}
//void* my_memcpy(void* p1, const void* p2, size_t num)
//{
//	char* x = (char*)p1;
//	char* y = (char*)p2;
//	while (num--)
//	{
//		*x = *y;
//		x++;
//		y++;
//	}
//	return p1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hijk";
//	printf("%s", (char*)my_memcpy(arr1, arr2, 2));
//	return 0;
//}
//char* my_strncat(char* p1, char* p2, size_t num)
//{
//	char* ret = p1;
//	while (*p1)
//	{
//		p1++;
//	}
//	while (num--)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[20] = "china";
//	printf("%s", my_strncat(arr1, arr2, 2));
//	return 0;
//}
//char* my_strncpy(char* p1, char* p2, size_t num)
//{
//	char* ret = p1;
//	while (num--)
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello china";
//	char arr2[20] = { 0 };
//	printf("%s", my_strncpy(arr2, arr1, 3));
//	return 0;
//}
//int f()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	*p = 0;
//	if (a)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int ret = f();
//	printf("%d", ret);
//	return 0;
//}
//char* my_strstr(char *arr1,char* arr2)
//{
//	char* s1 = arr1;
//	char* s2 = arr2;
//	while (*s2)
//	{
//		s1 = arr1 ;
//		s2 = arr2;
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == 0)
//		{
//				return arr1;
//		}
//		arr1++;
//	}
//	
//}
//int main()
//{
//	char arr1[] = "abcddddefhdijhi";
//	char arr2[] = "def";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//void my_strcat(char* p1, char* p2)
//{
//	while (*p1)
//		p1++;
//	while (*p1++ = *p2++)
//		;
//}
//int main()
//{
//	char arr1[] = "abcd\0uuuuuuuu";
//	char arr2[] = "rrrrr";
//	strcat(arr1, arr2);
//	return 0;
//}
//int my_strcmp(char* p1, char* p2)
//{
//	while (*p1 == *p2)
//	{
//		p1++;
//		p2++;
//		if (*p1 == 0)
//			return 0;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}
//void my_strcpy(char* p1, char* p2)
//{
//	assert(p1);
//	assert(p2);
//	while (*p1++ = *p2++)
//		;
//
//}
//int main()
//{
//	char arr1[20];
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	if (*p == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(p + 1);
//}
//int main()
//{
//	int ret=my_strlen("abcdef");
//	printf("%d ", ret);
//	return 0;
//}
//int int_cmp(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}
//void swap(void* p1, void* p2,int y)
//{
//	for (int i = 0; i < y; i++)
//	{
//		char temp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = temp;
//	}
//}
//void my_qsort(const void* arr, size_t num, size_t y, int (*cmp)(const void*, const void*))
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j * y, (char*)arr + (j + 1) * y)>0)
//			{
//				swap((char*)arr + j * y, (char*)arr + (j + 1) * y,y);
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int stru_cmp(const void* p1, const void* p2)
//{
//	//return ((struct	Stu*)p1)->age - ((struct	Stu*)p2)->age;
//	return strcmp(((struct Stu*)p2)->name, ((struct	Stu*)p1)->name);
//}
//int main()
//{
//	int s1[] = { 105,2,8,9,1,3,0,4,7,6 };
//	struct Stu arr[] = { {"zhansan",18},{"lisi",35},{"wangwu",30} };
//	my_qsort(s1, 10, sizeof(s1[0]), int_cmp);
//	my_qsort(arr, 3, sizeof(arr[0]), stru_cmp);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", s1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int struct_cmp(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//int main()
//{
//	int arr[] = { 3,5,8,9,10,30,7,8 };
//	struct Stu arr1[] = { {"zhansan", 18},{"lisi",30},{"wangwu",25} };
//	qsort(arr1, 3, sizeof(arr1[0]), struct_cmp);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//void cala(int (*p)(int, int))
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", p(x, y));
//}
//int main()
//{
//	cala(ADD);
//	cala(Sub);
//	return 0;
//}
//void yangHuiTriangle(int n)     //杨辉三角
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); //第一行就直接打印了
//	for (i = 1; i < n; i++) //从第二行开始
//	{
//		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//		{
//			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//		}
//
//		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	yangHuiTriangle(4);
//	return 0;
//}
//void test2(char arr[])
//{
//	char* p = arr;
//	int count = 0;
//	while(*p)
//	{
//		p++;
//		count++;
//	}
//	for (int i = 0; i < count-1; i++)
//	{
//		char temp = arr[i];
//		arr[i] = arr[i+1];
//		arr[i+1] = temp;
//	}
//}
//int test(char s1[],char s2[])
//{
//	int f = 0;
//	for (int i = 0; i < strlen(s1); i++)
//	{
//		test2(s1);
//		if (strcmp(s1, s2) == 0)
//		{
//			f = 1;
//			break;
//		}
//		else
//			f = 0;
//	}
//	if (f)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret=test(s1, s2);
//	//test2(s1);
//	printf("%d", ret);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int min = a > b ? b : a;
//	int max = a > b ? a : b;
//	for (int i = min; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数：%d\n", i);
//			break;
//		}
//	}
//	for (int i = max; i > 0; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("最小公倍数：%d", i);
//			break;
//		}
//		return 0;
//	}
//}
//int main()
//{
//    int(*arr)[10];
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int max = 0;
//    if (a > b)
//    {
//        max = a;
//    }
//    else
//        max = b;
//    for (int i = max; i > 0; i++)
//    {
//        if (i % a == 0 && i % b == 0)
//        {
//            printf("%d", i);
//            break;
//        }
//    }
//    return 0;
//}
//void sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1;i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(arr+j)>*(arr+j+1))
//			{
//				int te = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = te;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//int f(char* p)
//{
//	int count=0;
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = f("abcdefghi");
//	printf("%d", ret);
//	return 0;
//}
//void f(char arr[10])
//{
//	char* pz = arr;
//	while (*pz)
//	{
//		pz++;
//	}
//	pz = pz - 1;
//	char* p = arr;
//	while (p < pz)
//	{
//		int temp = *p;
//		*p = *(p + 1);
//		*(p + 1) = temp;
//		p++;
//	}
//}
//int main()
//{
//	char arr[10];
//	gets(arr);
//	for (int i = 1; i <= 1; i++)
//	{
//		f(arr);
//	}
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	gets(arr);
//	char* pstart = arr;
//	char* pr = arr;
//	while (*pr)
//	{
//		pr++;
//	}
//	pr--;
//	while (pstart < pr)
//	{
//		int temp = *pr;
//		*pr = *pstart;
//		*pstart = temp;
//		pstart++;
//		pr--;
//	}
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	for (int i = 0; i < 9; i++)
//	{
//		int f = 0;
//		for (int j = 0; j < 9 ; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				f = f+1;
//			}
//		}
//		if (f==1)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 5;
//	int a = 1 << 31;
//	printf("奇数：");
//	for (int i = 0; i < 32; i = i + 2)
//	{
//		int c = (n << i) & a;
//		if (c == 0)
//			printf("0 ");
//		else
//			printf("1 ");
//	}
//	
//	printf("\n偶数： ");
//	for (int i = 1; i < 32; i = i + 2)
//	{
//		int c = (n<<i) &a;
//		if (c == 0)
//			printf("0 ");
//		else
//			printf("1 ");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 8;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//int f(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return f(x - 1) + f(x - 2);
//}
//int h(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (x > 2)
//	{
//		while (x - 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			x--;
//		}
//		return c;
//	}
//	else
//		return 1;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("递归：%d\n", f(n));
//	printf("不递归：%d ", h(n));
//	return 0;
//}
//void f(int x)
//{
//	if (x <= 9)
//		printf("%d ", x);
//	else
//	{
//		f(x / 10);
//		printf("%d ", x % 10);
//	}
//}
//int main()
//{
//	f(1234);
//	return 0;
//}
//int j(int x)
//{
//	if (x == 0)
//		return 1;
//	else
//	{
//		return x * j(x - 1);
//	}
//}
//int main()
//{
//	//printf("%d ", j(3));
//	int n = 5;
//	int s = 1;
//	while (n)
//	{
//		s = s * n;
//		n--;
//	}
//	printf("%d ", s);
//	return 0;
//}
//int DigitSum(int x)
//{
//	int s = 0;
//	if (x <= 9)
//	{
//		return  x;
//	}
//	else
//	{
//		return s + x % 10 + DigitSum(x / 10);
//	}
//}
//int main()
//{
//	printf("%d ", DigitSum(1729));
//	return 0;
//}
//int f(int n,int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * f(n, k - 1);
//	}
//}
//int main()
//{
//	printf("%d ", f(2, 10));
//	return 0;
//}
//int main()
//{
//	int s = 0;
//	int a = 2;
//	for (int i = 1; i <= 5; i++)
//	{
//		s = s + a;
//		a = a + 2 * pow(10, i);
//	}
//	printf("%d ", s);
//}
//int main()
//{
//	int ret = pow(2, 5);
//	printf("%d", ret);
//}
//int main()
//{
//	for (int i = 1; i <= 100000; i++)
//	{
//		int count = 0;
//		int c = 0;
//		int a = 1;
//		int s = 0;
//		for (int j = 10; j <=1000000 ; j = j * 10)
//		{
//			c = i / j;
//			count++;
//			if (c == 0)
//			{
//				break;
//			}
//		}
//		int temo = i;
//		while (i)
//		{
//			a = i % 10;
//			i = i / 10;
//			s = s + pow(a,count);
//		}
//		if (temo == s)
//			printf("%d ", temo);
//		i = temo;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 20 / 1;
//	int s = 20;
//	int c = 0;
//	while (a >= 2)
//	{
//		c = a / 2;
//		s = s + c;
//		a = c + a % 2;
//	}
//	printf("%d", s);
//}
//int f(int x)
//{
//	if (x ==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return x*f(x - 1);
//	}
//}
//void f(long int x)
//{
//	if (x < 10)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		f(x / 10);
//		printf("%d ", x % 10);
//	}
//}
//int main()
//{
//	f(123444444444444444);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "             ";
//	int left = 6;
//	int right = 6;
//	while (left != -1)
//	{
//		arr1[left] = '*';
//		arr1[right] = '*';
//		left--;
//		right++;
//		printf("%s\n", arr1);
//	}
//	left = 0;
//	right = 12;
//	while (left != 7)
//	{
//		arr1[left] = ' ';
//		arr1[right] = ' ';
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= 7-i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= 2*i-1; k++)
//		{
//			printf("*");
//		}
//		for (int j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	for (int i = 1; i <= 13; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 1; k <= 13-2*i; k++)
//		{
//			printf("*");
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	int y, x;
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x < 10 && x >= 1)
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	printf("%d", y);
//	return 0;
//}
//int main()
//{
//	float a = 2.0;
//	float b = 1;
//	float s = 0;
//	float temp;
//	for (int i = 1; i <= 20; i++)
//	{
//		s = s + a / b;
//		temp = b;
//		b = a;
//		a = a + temp;
//	}
//	printf("%f", s);
//	return 0;
//}
//int bin_search(int arr[], int left, int right, int key)
//{
//	int f = -1;
//	while (left<=right)
//	{
//		if (arr[(left + right) / 2] > key)
//			{
//			right = (left + right) / 2-1;
//			}
//		else if (arr[(left + right) / 2] < key)
//		{
//			left = (left + right) / 2+1;
//		}
//		else
//		{
//			f = (left + right) / 2;
//			break;
//		}
//	}
//	return f;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int ret = bin_search(arr, 0, sz, 2);
//	printf("%d", ret);
//	return 0;
//}
//void init(int arr2[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//		arr2[i] = 0;
//}
//void print(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	printf("\n");
//	reverse(arr, sz);
//	print(arr, sz);
//	printf("\n");
//	init(arr,sz);
//	print(arr,sz);
//	return 0;
//}
//int is_prime(int x)   //判断素数
//{
//	int f = 0;
//	for (int j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			f= 0;
//			break;
//		}
//		else
//			f = 1;
//	}
//	return f;
//}
//int run(int y)  //判断闰年
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
////void cfkj(int x)   //乘法口诀表
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%3d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	printf("arr1[]=");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2[]=");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		int a = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = a;
//	}
//	printf("arr1[]=");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2[]=");
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main() 
//{
//    int a = 5;
//    int b = 6;
//        int arr1[5];
//        int arr2[6];
//        int arr3[11];
//        for (int i = 0; i < 5; i++)
//        {
//            scanf("%d", &arr1[i]);
//        }
//        for (int i = 0; i < 6; i++)
//        {
//            scanf("%d", &arr2[i]);
//        }
//        int a1 = 0;
//        int a2 = 0;
//        int a3 = 0;
//        while (a1 != a && a2 != b)
//        {
//            if (arr1[a1] > arr2[a2])
//            {
//                arr3[a3] = arr2[a2];
//                a2 = a2 + 1;
//            }
//            else
//            {
//                arr3[a3] = arr1[a1];
//                a1 = a1 + 1;
//            }
//            a3 = a3 + 1;
//        }
//        if (a1 == a)
//        {
//            for (int i = a2; i < b; i++)
//            {
//                arr3[a3] = arr2[a2];
//                a3 = a3 + 1;
//            }
//        }
//        if (a2 == b)
//        {
//            for (int i = a1; i < a; i++)
//            {
//                arr3[a3] = arr2[i];
//                a3 = a3 + 1;
//            }
//        }
//        for (int i = 0; i < a + b; i++)
//        {
//            printf("%d ", arr3[i]);
//        }
//
//        return 0;
//}
//int main() {
//    int a;
//    a = 8;
//    char arr[9];
//        char arr2[9];
//        for (int i = 0; i < a; i++)
//        {
//            arr[i] = ' ';
//            arr2[i] = '*';
//        }
//        arr[8] = '\0';
//        int left = 0;
//        int right = a - 1;
//        do
//        {
//            arr[left] = '*';
//            arr[right] = '*';
//            printf("%s\n", arr);
//            arr[left] = ' ';
//            arr[right] = ' ';
//            left = left + 1;
//            right = right - 1;
//        } while (right != -1);
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int arr[10];
//	float s = 0;
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &a);
//		arr[i] = a;
//	}
//	for (int i = 0; i <= 9; i++)
//	{
//		s = s + arr[i];
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float p = s / sz;
//	printf("%f", p);
//	return 0;
//}
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//int main()
//{
//	int n = 10;
//	int arr[n];
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a > b) ? a:b;
//	for (int i = m; i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}
//
//}
//void game()
//{
//	int ret = rand()%100+1;
//	int b = 0;
//	int c = 5;
//	while (c)
//	{
//		printf("输入你猜的数：->");
//		scanf("%d", &b);
//		if (b > ret)
//			printf("猜大了\n");
//		else if (b < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//		c--;
//	}
//	if (c == 0)
//		printf("机会用完了,是%d\n",ret);
//		
//}
//int main()
//{
//	int a = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("*******************\n");
//		printf("***** 1、game *****\n");
//		printf("***** 0、exit *****\n");
//		printf("请输入1或0:");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			break;
//		}
//	} while (a);
//	return 0;
//}