#include"SeqList.h"
void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
//void SLDestroy(SL* ps)
//{
//	assert(ps);
//	assert(ps->arr);
//	free(ps->arr);
//	ps->arr = NULL;
//	ps->capacity = ps->size = 0;
//}
//void SLPrint(SL* ps)
//{
//	assert(ps);
//	for (int i = 0; i < ps->size; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//}
void SLcheck(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLType* temp = (SLType*)realloc(ps->arr, newcapacity*sizeof(SLType));
		assert(temp);
		ps->arr = temp;
		ps->capacity = newcapacity;
	}
}
void SLPushBack(SL* ps, SLType x)
{
	assert(ps);
	SLcheck(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}
//void SLPushFront(SL* ps, int x)
//{
//	assert(ps);
//	SLcheck(ps);
//	for (int i = ps->size;i>0;i--)
//	{
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps->arr[0] = x;
//	ps->size++;
//}
//void SLIsert(SL* ps, int pos, int x)
//{
//	assert(ps);
//	assert(pos >= 0 && pos < ps->size);
//	SLcheck(ps);
//	for (int i = ps->size;i>pos; i--)
//	{
//		ps->arr[i] = ps->arr[i - 1];
//	}
//	ps->arr[pos] = x;
//	ps->size++;
//}
void SLPop(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos;i<ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}
//void SLPopBack(SL* ps)
//{
//	assert(ps);
//	assert(ps->size);
//	ps->size--;
//}
//void SLPopFront(SL* ps)
//{
//	assert(ps);
//	assert(ps->size);
//	SLPop(ps, 0);
//	ps->size--;
//}
//int SLFind(SL* ps, SLType x)
//{
//	assert(ps);
//	int f = -1;
//	for (int i = 0; i < ps->size;i++)
//	{
//		if (ps->arr[i] == x)
//		{
//			f = i;
//			break;
//		}
//	}
//	return f;
//}