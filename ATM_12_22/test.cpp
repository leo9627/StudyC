#include"ATM.h"
#include<iostream>

queue::queue(int n):max(n)
{
	first = NULL;
	rear = NULL;
	all = 0;
}
int  queue::enqueue(comer c2)
{
	if (full())
		return 0;
	cos* p1 = new  cos;
	p1->c1 = c2;
	p1->next = NULL;
	if (first == NULL)
		first = p1;
	else
		rear->next = p1;
	rear = p1;
	all++;
	return 1;
}
bool queue::dequeue(comer & c3)
{
	if (first == NULL)
		return false;
	c3 = first->c1;
	cos* temp = first;
	first = first->next;
	delete temp;
	all--;
	if (first == NULL)
		rear = NULL;
	return true;
}
bool queue::full()
{
	if (all >= max)
		return true;
	else
		return false;
}
bool queue::empt()
{
	if (all == 0)
		return true;
	else
		return false;
}

void comer::rarrive(int n)
{
	arrive = n;
	worktime = rand() % 3+1;
}