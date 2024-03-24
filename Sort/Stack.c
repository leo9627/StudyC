#include"Stack.h"
void StackInit(pStack ps)
{
	assert(ps);
	ps->_arr = NULL;
	ps->_capacity = 0;
	ps->_top = 0;
}

void StackPush(pStack ps, STDataType x)
{
	assert(ps);
	if (ps->_capacity == ps->_top)
	{
		ps->_capacity = ps->_capacity == 0 ? 4 : 2 * ps->_capacity;
		STDataType* temp = (STDataType*)realloc(ps->_arr, sizeof(STDataType) * ps->_capacity);
		if (temp == NULL)
		{
			perror("malloc");
			exit(-1);
		}
		ps->_arr = temp;
	}
	ps->_arr[ps->_top] = x;
	ps->_top++;
}
void StackPop(pStack ps)
{
	assert(ps);
	assert(ps->_top > 0);
	ps->_top--;
}
STDataType StackTop(pStack ps)
{
	assert(ps);
	assert(ps->_top > 0);
	return ps->_arr[ps->_top - 1];
}
int StackEmpty(pStack ps)
{
	return ps->_top == 0 ? 1 : 0;
}
int StackSize(pStack ps)
{
	assert(ps);
	return ps->_top;
}
void StackDestory(pStack ps)
{
	free(ps->_arr);
	ps->_arr = 0;
	ps->_capacity = ps->_top = 0;
}