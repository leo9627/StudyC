#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<cstring>
#include<fstream>
#include"teext.h"
//using namespace std;
int main()
{
	stock mike{ "huawei",20,20,400 };
	stock lili{ "xiaomi",20,2,40 };
	stock temp = mike.cmp(lili);
	temp.show();
	
	return 0;
}
//int main()    //股票交易系统
//{
//	using namespace std;
//	int a;
//	int b;
//	string s1;
//	cout << "股票的公司:";
//	cin >> s1;
//	cout << "购买股数:";
//	cin >> a;
//	cout << "每股价值:";
//	cin >> b;
//	//stock mike;          //没有提供初始化函数
//	//stock mike =stock( "huawei",20,20,20);     //提供初始化函数
//	//stock mike("huawei", 20, 20, 20);           //初始化
//	//stock mike = stock();
//	//stock mike  { "huawei", 20, 20 };           
//	stock mike{  };                            //使用stock()没有任何参数的函数
//	mike = { "huawei", 20, 20 };               //第四个参数默认为9
//	mike = stock();
//	//上面两个都是：
//	// mike已经创建，创建了个临时变量里面是右边的值，然后把临时变量赋给mike，最后删除临时变量
//	//stock mike = { "huawei", 20, 20, 20 };     //c++11支持的新型初始化
//	//stock* p = new stock("huawei", 20, 20, 20);
//	//stock mike = *p;
//	mike.firstbuy(s1,a ,b);
//	mike.show();
//	int c = 0;
//	do
//	{
//		cout << "**********    0.exit   ************"<<endl;
//		cout << "**********    1.购买   ************" << endl;
//		cout << "**********    2.卖出   ************" << endl;
//		cout << "**********  3.更新价格 ************" << endl;
//		cout << "请输入:";
//		cin >> c;
//		switch (c)
//		{
//		case 1:
//			cout << "购买股数:";
//			int a2;
//			cin >> a2;
//			cout << "购买价格:";
//			int a1;
//			cin >> a1;
//			mike.buy(a2, a1);
//			mike.show();
//			break;
//		case 2:
//			cout << "卖出股数:";
//			int b2;
//			cin >> b2;
//			cout << "卖出价格:";
//			int b1;
//			cin >> b1;
//			mike.sell(b2, b1);
//			mike.show();
//			break;
//		case 3:
//			cout << "价格:";
//			int c1;
//			cin >> c1;
//			mike.updata(c1);
//			mike.show();
//			break;
//		case 0:
//			cout << "exit";
//			break;
//		default:
//			cout << "error"<<endl;
//		}
//	} while (c);
//	return 0;
//}
//int main()
//{
//	using std::cout;
//	cout << "abcdef";
//	return 0;
//}
//namespace mike
//{
//	int x=5;
//	int y;
//}
//namespace lili = mike;
////using mike::x;
//int x;
//struct stu
//{
//	string name;
//	int age;
//};
//int main()
//{
//	//using mike::x;
//	using lili::x;
//
//	x = 5;
//	::x = 10;   //x为全局变量
//	cout << x<<endl;
//	cout << ::x;
//	return 0;
//}

//template <typename T1, typename T2>
//auto Swap(T1 & x, T2 &  y)
//{
//	T2 temp = y;
//	y = x;
//	x = temp;
//}
//int main()
//{
//	int a = 2;
//	float b = 3.9;
//	Swap(a, b);
//	cout << a;
//	return 0;
//}
//template <typename T1,typename T2>
//auto ADD(T1 x, T2 y)
//{
//	typedef decltype(x + y) w;
//	w h= x + y;
//	h= h * 2;
//	return h;
//}
//int main()
//{
//	int a = 2;
//	float b = 2.9;
//	cout << ADD(a , b);
//	return 0;
//}
//int main()   //文件读取
//{
//	ifstream out;
//	out.open("data.txt");
//	if (!out.is_open())
//	{
//		exit(EXIT_FAILURE);
//	}
//	
//	char s1;
//	while ((out >> s1))
//		cout << s1;
//	/*out >> s1;
//	cout << s1;
//	out >> s1;
//	cout << s1;*/
//	out.close();
//	return 0;
//}
//template<typename T>
//T ADD(T a,T b)       //函数模板   函数实例化
//{
//	return a + b;
//}
//
//template<>float ADD(float x, float y)  //函数具体化
//{
//	return x * y;
//}
//float ADD(float x, float y)  //函数具体化
//{
//	return (x + y)*2;
//}
//int main()
//{
//	int a=2;
//	int b = 4;
//	//比较下面三行代码
//	cout << ADD(a, b) << endl;    //函数隐形实例化(a,b一定要同类型)
//	cout << (int)ADD<char>(a,b)<<endl;  
//	//调用第一个
//	//函数显性实例化（a,b不用同一种类型，因为会对a,b进行强制类型转换
//	// 相当于调用了了 char ADD(char a,char b)）
//	cout << ADD<float>(a, b) << endl;   //函数显性实例化，与具体化类型匹配，所以调用具体化
//	//调用第二个因为有<>float
//	cout << ADD((float)a, (float)b) << endl;
//	//调用第三个
//	float x = 2.0;
//	float y = 2.1;
//	cout << ADD(x, y);
//	return 0;
//}
//stu& f(stu& s1)
//{
//	stu* p{};
//	*p = s1;
//	return *p;
//}

//template <typename T>
//void Swap(T &a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//	//return a + b;
//}
//void S1(int & a, int & b)
//{
//	int  temp = a;
//	a = b;
//	b = temp;
//	//return a + b;
//}
//int main()
//{
//	float a = 5;
//	int b = 9;
//	//S1(a, b);
//	cout << a << endl;
//	cout << b;
//	return 0;
//}
//inline void  s( int & x, int & y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//	//return x + y;
//}
//int f(int x)
//{
//	x++;
//	return x + 2;
//}
//int main()
//{
//	stu s1 = { "zhans",12 };
//	const int  a = 1;
//	int b = 2;
//	int c=f(a);
//	//int x=s(a, b);
//	//stu x = f(s1);
//	cout << c;
//	return 0;
//}
//int main()
//{
//	array<int, 5> arr1{1,3,5,7,9};
//	int even = arr1[0] + arr1[4];
//	cout << even;
//	//vector<int> arr(20);
//	//array<int, 3> arr = {23,33};
//	//array<int, 3> arr1 = {1,2,3};
//	//arr1 = arr;   //arr1和arr的元素个数必须相同
//	/*stu* s1 = new stu;
//	struct stu* s2 = new struct stu;
//	s1->name = "zhansan";
//	(*s1).age = 10;
//	(*s2).age = 20;
//	s2->name = "lisi";
//	cout << s1->name << s1->age<<endl;
//	cout << s2->name << s2->age;
//	delete s1;
//	delete s2;
//	s1 = NULL;
//	s2 = NULL;*/
//	/*char s1[] = {"pig"};
//	cout << s1<<endl;
//	cout << (int*)s1;*/
//	/*int a{ 0 };
//	cin >> a;
//	int* arr = new int[a];*/
//	/*for (int i = 0; i < 20; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i]<<" ";
//	}*/
//	//delete[]arr;
//	//int* a = new int;  //new为运算符
//	//float* b = new float;
//	//*b = 10.0002;
//	//*a = 10;
//	//cout << *b<<endl;
//	//delete a, b;
//	//a = NULL;
//	//cout << a;
//	//string s1{"lvttt"};
//	//string s2 = {"haosuai"};
//	//float a = 0.02;
//	////getline(cin, s1);
//	//cout<<a;
//	//cin >> s1+s2;
//	//int len= s1.size();//求s1的长度
//	//char arr[20];
//	//char arr1[10];
//	//cin >> arr;
//	/*cin.get();
//	cin.get();
//	cin.get(arr1, 10);*/
//	//cout << arr;
//	//cout << arr1;
//	return 0;
//}
//int main()  //第二章
//{
//	using namespace std;
//	int h = 0;
//	auto a = 9.0;//自动类型推断
//	char c{ 's' };
//	int m=static_cast<int>(c);//类型转换
//	//int m=int(c);
//	//cin >> h;
//	//cin >> m;
//	cout << "abc\u00E2def";
//	return 0;
//}