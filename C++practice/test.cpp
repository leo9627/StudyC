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
//int main()    //��Ʊ����ϵͳ
//{
//	using namespace std;
//	int a;
//	int b;
//	string s1;
//	cout << "��Ʊ�Ĺ�˾:";
//	cin >> s1;
//	cout << "�������:";
//	cin >> a;
//	cout << "ÿ�ɼ�ֵ:";
//	cin >> b;
//	//stock mike;          //û���ṩ��ʼ������
//	//stock mike =stock( "huawei",20,20,20);     //�ṩ��ʼ������
//	//stock mike("huawei", 20, 20, 20);           //��ʼ��
//	//stock mike = stock();
//	//stock mike  { "huawei", 20, 20 };           
//	stock mike{  };                            //ʹ��stock()û���κβ����ĺ���
//	mike = { "huawei", 20, 20 };               //���ĸ�����Ĭ��Ϊ9
//	mike = stock();
//	//�����������ǣ�
//	// mike�Ѿ������������˸���ʱ�����������ұߵ�ֵ��Ȼ�����ʱ��������mike�����ɾ����ʱ����
//	//stock mike = { "huawei", 20, 20, 20 };     //c++11֧�ֵ����ͳ�ʼ��
//	//stock* p = new stock("huawei", 20, 20, 20);
//	//stock mike = *p;
//	mike.firstbuy(s1,a ,b);
//	mike.show();
//	int c = 0;
//	do
//	{
//		cout << "**********    0.exit   ************"<<endl;
//		cout << "**********    1.����   ************" << endl;
//		cout << "**********    2.����   ************" << endl;
//		cout << "**********  3.���¼۸� ************" << endl;
//		cout << "������:";
//		cin >> c;
//		switch (c)
//		{
//		case 1:
//			cout << "�������:";
//			int a2;
//			cin >> a2;
//			cout << "����۸�:";
//			int a1;
//			cin >> a1;
//			mike.buy(a2, a1);
//			mike.show();
//			break;
//		case 2:
//			cout << "��������:";
//			int b2;
//			cin >> b2;
//			cout << "�����۸�:";
//			int b1;
//			cin >> b1;
//			mike.sell(b2, b1);
//			mike.show();
//			break;
//		case 3:
//			cout << "�۸�:";
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
//	::x = 10;   //xΪȫ�ֱ���
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
//int main()   //�ļ���ȡ
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
//T ADD(T a,T b)       //����ģ��   ����ʵ����
//{
//	return a + b;
//}
//
//template<>float ADD(float x, float y)  //�������廯
//{
//	return x * y;
//}
//float ADD(float x, float y)  //�������廯
//{
//	return (x + y)*2;
//}
//int main()
//{
//	int a=2;
//	int b = 4;
//	//�Ƚ��������д���
//	cout << ADD(a, b) << endl;    //��������ʵ����(a,bһ��Ҫͬ����)
//	cout << (int)ADD<char>(a,b)<<endl;  
//	//���õ�һ��
//	//��������ʵ������a,b����ͬһ�����ͣ���Ϊ���a,b����ǿ������ת��
//	// �൱�ڵ������� char ADD(char a,char b)��
//	cout << ADD<float>(a, b) << endl;   //��������ʵ����������廯����ƥ�䣬���Ե��þ��廯
//	//���õڶ�����Ϊ��<>float
//	cout << ADD((float)a, (float)b) << endl;
//	//���õ�����
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
//	//arr1 = arr;   //arr1��arr��Ԫ�ظ���������ͬ
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
//	//int* a = new int;  //newΪ�����
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
//	//int len= s1.size();//��s1�ĳ���
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
//int main()  //�ڶ���
//{
//	using namespace std;
//	int h = 0;
//	auto a = 9.0;//�Զ������ƶ�
//	char c{ 's' };
//	int m=static_cast<int>(c);//����ת��
//	//int m=int(c);
//	//cin >> h;
//	//cin >> m;
//	cout << "abc\u00E2def";
//	return 0;
//}