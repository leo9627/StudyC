#pragma once
#include<string>
class stock
{
private:
	std::string name;
	//const int month=12;     //这样是不行的  ，先创建后替换，但编译的时候没有对象是不会创建的
	//enum{month=12};        //这样ok
	//static const int month=12;  //这样也ok
	int share;
	int shareval;
	int totalval;
	void set()
	{
		totalval = share * shareval;
	}
public:
	stock(std::string n, int se, int sl, int tl=9);
	stock();
	const stock& cmp(const stock& s1);
	void firstbuy(const std::string& n, int sh, int shval);
	void buy(int tshare, int tshareval);
	void sell(int tshare, int tshareval);
	void updata(int tshareval);
	void show();
	~stock() {};           //析构函数写不写无所谓，不写编译器补上，对象过期就会调用，释放内存
};