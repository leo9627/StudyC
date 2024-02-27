
#include"teext.h"
#include<iostream>
stock::stock(std::string n, int se , int s , int t )     //�Զ����ʼ��������Ĭ�ϲ�������д��д��ͷ�ļ�
{
	name = n;
	share = se;
	shareval = s;
	totalval = t;
}
stock::stock()                          //Ҳ���Զ��廯��ʼ����
{
	name = "asdd";
	share = 2;
	shareval = 2;
	totalval = 2;
}
void stock::firstbuy(const std::string& n, int sh, int shval)
{
	name = n;
	share = sh;
	shareval = shval;
	set();
}
void stock::buy(int tshare, int tshareval)
{
	if (tshare < 0)
	{
		std::cout << "�������";
		tshare = 0;
	}
	share = share + tshare;
	shareval = tshareval;
	set();
}
void stock::sell(int tshare, int tshareval)
{
	if (tshare < 0)
	{
		std::cout << "�������";
		tshare = 0;
	}
	else if (tshare > share)
	{
		std::cout << "���Ĺ�Ʊ����" << std::endl;
		tshare = 0;
	}
	share = share - tshare;
	shareval = tshareval;
	set();
}
void stock::updata(int tshareval)
{
	shareval = tshareval;
	set();
}
//void stock::show() const  //����const���εĶ������ʹ��show
void stock::show()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "���Ĺ�Ʊ:" << endl;
	cout << name << endl;
	cout << "ӵ�йɷ���" << share << endl;
	cout << "ÿ�ɼ۸�" << shareval << endl;
	cout << "���ʲ�" << totalval << endl;
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
const stock& stock::cmp(const stock& s1)
{
	if (s1.totalval < totalval)
		return s1;
	else
		return *this;
}