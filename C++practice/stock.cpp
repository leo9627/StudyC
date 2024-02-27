
#include"teext.h"
#include<iostream>
stock::stock(std::string n, int se , int s , int t )     //自定义初始化函数，默认参数不用写，写在头文件
{
	name = n;
	share = se;
	shareval = s;
	totalval = t;
}
stock::stock()                          //也是自定义化初始函数
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
		std::cout << "输入错误";
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
		std::cout << "输入错误";
		tshare = 0;
	}
	else if (tshare > share)
	{
		std::cout << "您的股票不够" << std::endl;
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
//void stock::show() const  //这样const修饰的对象才能使用show
void stock::show()
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "您的股票:" << endl;
	cout << name << endl;
	cout << "拥有股份数" << share << endl;
	cout << "每股价格" << shareval << endl;
	cout << "总资产" << totalval << endl;
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