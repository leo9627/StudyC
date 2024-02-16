#pragma once
#include<iostream>
using namespace std;
class comer
{
private:
	int arrive;
	int worktime;
public:
	void rarrive(int n);
	int getworktime() { return worktime; }
	int getarrive() { return arrive; };
};
class queue
{
private:
	struct cos
	{
		comer c1;
		struct cos* next;
	};
	cos* first;
	cos* rear;
	int all;
	const int max;
public:
	queue(int n = 10);
	int enqueue(comer c2);
	bool dequeue(comer & c3);
	bool full();
	int getall() { return all; };
	bool empt();
	//~queue();
};
