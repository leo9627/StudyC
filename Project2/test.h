#pragma once
#include<iostream>
using namespace std;
template<class T>void f(T g);

template <class T>
class ADD
{
private:
	T a;
	T b;
public:
	ADD(int a, int b)
	{
		this->a = a;
		this->b = b;;
	}
	T result();
	template<class T1,class T2> friend auto re(T1 c,T2 b);
	friend void f<ADD<T>>(ADD<T> g);
};
template<class T>
void f(T g)
{
	cout << g.a << " " << g.b<<endl;
}
template<class T1, class T2>  auto re(T1 c, T2 b)
{
	return c.a + b.a;
}
template<class T>
T ADD<T>::result()
{
	return a + b;
}

int ADD<int>::result()
{
	return a * b;
}