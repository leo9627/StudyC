#pragma once
#include<string>
#include<iostream>
using std::string;

class brass
{
private:
	string name;
	long accout;
	double blance;
public:
	brass(const string & na,long ac,double bl);
	double getblance() { return blance; };
	virtual void deposit(double a);
	virtual void withdraw(int b);
	virtual void show();
	virtual ~brass() {};
	virtual void show1(int a) { std::cout << "10"; };
	virtual void show1() { std::cout << "20"; };
};
class brassplus :public brass
{
private:
	double max;
	double rat;
	double total;
public:
	brassplus(string& na, long ac, double bl, double ma=500, double ra=1.05);
	brassplus(brass& br, double ma=500, double ra=1.05);
	virtual void withdraw(int c);
	virtual void deposit(double d);
	virtual void show();
	virtual void show1(int a) { std::cout << "1"; };
	//void show1() { std::cout << "60"; };
};