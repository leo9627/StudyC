#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include"test.h"
using namespace std;
//template <typename T1,typename T2>

int main()
{
	ADD<int> a1(2,3);
	ADD<int> a2(3, 3);
	f(a1);
	cout << a1.result()<<endl;
	cout << re(a1, a2);
}

//void my_foreach(T1 a, T1 b, T2 f)
//{
//	while (a != b)
//	{
//		f(*a);
//		a++;
//	}
//}
//void show(int a)
//{
//	cout << a<<" ";
//}
//struct stu
//{
//	int age;
//	int score;
//};
//int main()
//{
//	stu s1 = { 12,20 };
//	stu s2 = { 24,39 };
//	vector<stu> v3;
//	v3.push_back(s1);
//	v3.push_back(s2);
//	vector<int> v1,v2;
//	int arr[] = { 1,2,3,4 };
//	v2 = vector<int>(arr, arr + 4);
//	v1=vector<int>(20, 8);
//	
//	//v1 = vector<int>(v2.begin(), v2.end());
//	//v1.assign(v2.begin(), v2.end());
//	//v1.push_back(9999999);
//	//v1.swap(v2);
//	v2.resize(8,999);
//	cout << (v3.begin()++)->age;
//	/*for (int i = 0; i < v2.size(); i++)
//		cout << v2[i]<<" ";
//	cout << endl;
//	my_foreach(v2.begin(), v2.end(), show);*/
//	return 0;
//}
//int main() {
//
//    int a = 0;
//    cin >> a;
//    a = 99;
//    int f = 1;
//    for (int i = a / 2; i > 1; i--)
//    {
//        cout << i;
//        if (a % i == 0)
//            f = 0;
//        break;
//    }
//    if (f)
//        cout << "是质数";
//    else
//        cout << "不是质数";
//    return 0;
//}
//class Person {
//
//public:
//    char* name; // 姓名
//    int age;    // 年龄
//
//    Person(const char* name, int age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//    Person(const Person& p) {
//        this->name = new char[strlen(p.name) + 1];
//        //利用strcpy函数，将p的name传给当前类
//        strcpy(this->name, p.name);
//        //将p的age传给当前类
//        this->age = p.age;
//    }
//    Person& operator=(Person& p1)
//    {
//        age = p1.age;
//        delete[]name;
//        name = new char[strlen(p1.name) + 1];
//        strcpy(name, p1.name);
//    }
//
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//
//    ~Person() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2 = p1;
//
//    p2.showPerson();
//
//    return 0;
//
//}