#include"test.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
extern int ADD(int, int);
int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
    int n = 0;
    int k1 = k;
    while (k1)
    {
        n++;
        k1 = k1 / 10;
    }
    int max = n > numSize ? n : numSize;
    int* ret = (int*)malloc(sizeof(int) * (max + 1));
    for (int i = 0; i <= max; i++)
    {
        ret[i] = 0;
    }
    int temp = max;
    for (int i = numSize - 1; i >= 0; i--)
    {
        ret[temp] = num[i];
        temp--;
    }
    temp = max;
    while (temp >= 0)
    {
        ret[temp] = (ret[temp] + k) % 10;
        k = (ret[temp] + k) / 10;
        temp--;
    }
    if (ret[0] != 0)
    {
        *returnSize = max + 1;
        return ret;
    }
    else
    {
        *returnSize = max;
        return ret + 1;
    }
}
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int n = 0;
    for (int i = 0; i < numsSize; i++)
    {
        n ^= nums[i];
    }
    int m = 0;
    while (((n >> m) & 1) != 1)
    {
        m++;
    }
    int a = 0;
    int b = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] >> m == 1)
        {
            a ^= nums[i];
        }
        else
        {
            b ^= nums[i];
        }
    }
    int* ret = (int*)malloc(sizeof(int) * 2);
    ret[0] = a;
    ret[1] = b;
    return ret;
}
int singleNumber1(int* nums, int numsSize) {
    int ret = 0;
    for (int i = 0; i < 32; i++) {
        int s = 0;
        for (int j = 0; j < numsSize; j++) {
            s += (nums[j] >> i & 1);
        }
        ret = ret | ((s % 3) << i);
    }
    return ret;
}
typedef struct ListNode
{
    int val;
    struct ListNode* next;
}ListNode;
bool chkPalindrome(ListNode* A) {
    ListNode* front = A;
    ListNode* under = NULL;
    ListNode* next = NULL;
    while (front->next) {
        next = front->next;
        front->next = under;
        under = front;
        front = next;
        if (under->val == front->val) {
            break;
        }
    }
    while (front && under) {
        if (front->val != under->val)
            return false;
        front = front->next;
        under = under->next;
    }
    if (front || under)
        return false;
    return true;
}
int main()
{
    int arr[] = { -2,-2,1,1,4,1,4,4,-4,-2 };
    int ret = 0;
    ListNode* l1 = (ListNode*)malloc(sizeof(ListNode));
    //assert(l1);
    l1->val = 1;
    ListNode* l2 = (ListNode*)malloc(sizeof(ListNode));
    l2->val = 1;

    ListNode* l3 = (ListNode*)malloc(sizeof(ListNode));
    l3->val = 3;

    ListNode* l4 = (ListNode*)malloc(sizeof(ListNode));
    l4->val = 4;
    l1->next = NULL;
    l2->next = l3;
    l3->next = l4;
    l4->next = NULL;
    bool ret1=chkPalindrome(l1);
    printf("%d", ret1);
	return 0;
}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int n1p = 0;
//    int n2p = 0;
//    int temp = m;
//    while (n2p < n)
//    {
//        if (nums1[n1p] <= nums2[n2p])
//        {
//            for (int i = nums1Size - 1; i > n1p; i--)
//            {
//                nums1[i] = nums1[i - 1];
//            }
//            nums1[n1p] = nums2[n2p];
//            temp++;
//            n2p++;
//        }
//        if (temp == n1p)
//            break;
//        n1p++;
//    }
//    for (int i = n1p; i < nums1Size; i++)
//    {
//        nums1[i] = nums2[n2p];
//        n2p++;
//    }
//}
//int main()
//{
//    int num1[6] = { 1,2,3 };
//    int num2[3] = { 2,5,6 };
//    merge(num1, 6, 3, num2, 3, 3);
//    return 0;
//}
//int main()
//{
//	for (int i = 2; i < 2; i++)
//	{
//		printf("ertyuio");
//		
//	}
//	printf("haha");
//	return 0;
//}
//int removeElement(int* nums, int numsSize, int val)
//{
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//        {
//            for (int j = i; j < numsSize; j++)
//            {
//                nums[j] = nums[j + 1];
//            }
//            numsSize--;
//        }
//    }
//    return numsSize;
//}
//int main()
//{
//    int n[4] = { 3,2,2,3 };
//    int len=removeElement(n, 4, 3);
//    for (int i = 0; i < len; i++) {
//        printf("%d ",n[i]);
//    }
//    return 0;
//}
//struct stu
//{
//	int age;
//	int score;
//};
//int main()
//{
//	int ret = ADD(2, 3);
//	struct stu s1 ;
//	s1.age = 20;
//	s1.score = 11;
//	printf("%d", ret);
//	return 0;
//}