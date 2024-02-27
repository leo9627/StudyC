#include"brass.h"
brass::brass(const string& na, long ac, double bl)
{
	name = na;
	accout = ac;
	blance = bl;
}
void brass::deposit(double a)
{
	if (a < 0)
		std::cout << "ÊäÈë´íÎó";
	else
		blance += a;
}
void brass::withdraw(int b)
{
	if (b > blance)
		std::cout << "´íÎó";
	else
		blance -= b;
}
void brass::show()
{
	std::cout << name << std::endl << accout << std::endl << blance<<std::endl;
}


brassplus::brassplus(string& na, long ac, double bl, double ma, double ra) 
	:brass(na,ac,bl)
{
	max = ma;
	rat = ra;
	total = 0;
}
brassplus::brassplus(brass& br, double ma, double ra) :brass(br)
{
	max = ma;
	rat = ra;
	total = 0;
}
void brassplus::withdraw(int c)
{
	if (c > 0 && c < getblance())
		brass::withdraw(c);
	else if (c > getblance() && c <= getblance() + max - total)
	{
		total += (c - getblance())*(1+rat);
		brass::deposit(c - getblance());
		brass::withdraw(c);

	}
	else 
		std::cout << "´íÎó";
}
void brassplus::deposit(double d)
{
	brass::deposit(d);
}
void brassplus::show()
{
	brass::show();
	std::cout << max << std::endl << rat << std::endl << total<<std::endl;
}