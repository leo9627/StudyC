#include<iostream>

#include"test.h"
using namespace std;
using namespace VECTOR; 
int main()
{
	/*vector* p = new vector;
	(*p)=vector(2,3,vector::R);
	cout << (*p);
	(*p)++;

	delete p;
	p = NULL;*/
	
	vector mike(3,4,vector::R);
	mike++;
	cout << mike;
	////vector jon = mike * 2;
	//vector jon = 2 * mike;
	//vector jon = vector(3);
	//jon = (vector)3 + mike;
	//int a = (int)jon;
	return 0;
}
//class phone {
//	// write your code here......
//	friend class myphone;
//private:
//	int price;
//public:
//	phone(int x,int y) {
//		price = x*y;
//	}
//	
//};
//class myphone {
//private:
//	phone a;
//public:
//	myphone(int x) :a(x,2)
//	{
//
//	}
//
//	int getprice() {
//		return a.price;
//	}
//};
//int main() {
//	int p;
//	cin >> p;
//	myphone a(p);
//	cout << a.getprice();
//	return 0;
//}
//class Time
//{
//private:
//	int hour;
//	int minutes;
//public:
//	Time(int a, int b);
//	void show() const;
//	Time operator+(const Time& a);
//	Time operator*(int a);
//	friend ostream& operator<<(ostream& os, Time x);
//	friend Time operator*(int a, Time x)
//	{
//		return x * a;
//	}
//	//int  operator+(const Time& a);
//
//};
//Time Time::operator*(int a)
//{
//	Time temp=*this;
//	temp.hour = hour * a;
//	return temp;
//}
//ostream& operator<<(ostream& os, Time x)
//{
//	os<< x.hour << "hour " << x.minutes << "minutes" << endl;
//	return os;
//}
//Time::Time(int a=0,int b=0)
//{
//	hour = a;
//	minutes = b;
//}
//void Time::show() const
//{
//	cout << hour << "hour " << minutes << "minutes"<<endl;
//}
//Time Time::operator+(const Time& a)
//{
//	Time temp;
//	temp.hour = hour + a.hour;
//	temp.minutes = minutes + a.minutes;
//	temp.hour += temp.minutes / 60;
//	temp.minutes %= 60;
//	return temp;
//}
//int main()
//{
//	Time mike{ 10,20 };
//	Time lili{ 2,58 };
//	Time jon;
//	//jon.show();
//	cout << jon;
//	jon = mike + lili;     //->jon=mike.operator+(lili);
//	//jon.show();
//	cout << jon;
//	jon = jon * 2;
//	cout << jon;
//	jon = 2 * jon;
//	cout << jon;
//	return 0;
//}
//int p(int a, int b)
//{
//	return a * b;
//}
//int p(int a)
//{
//	return a * 5;
//}
//int main()
//{
//	cout << p(2)<<endl;
//	cout << p(2, 3);
//	return 0;
//}
//template<typename T1,typename T2>
//auto cala(T1 a, T2 b)
//{
//	decltype(a * b) w;
//	w = a * b;
//	return w;
//}
//
//int main()
//{
//	float a = 20.5;
//	int b = 2;
//	auto s = cala(a, b);
//	cout << s;
//	return 0;
//}
//enum struct egg
//{
//	small=8,
//	large
//};
//enum class t_shirt
//{
//	sm=5, 
//	large
//};
//int main()
//{
//	int  a =(int) egg::large;
//	cout << int(a);
//	return 0;
//}