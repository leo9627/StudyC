#include<iostream>
#include<cmath>
#include"test.h"
namespace VECTOR
{
	vector::operator int()
	{
		return x + y;
	}
	vector::vector(double a)
	{
		x = y = a;
		mode = R;
		rtoj();
	}
	void vector::rtoj()
	{
		p = sqrt(x*x+y*y);
		a = atan2(y,x);
	}
	void vector::jtor()
	{
		x = p * cos(a);
		y = p * sin(a);
	}
	vector::vector()
	{
		
	}
	vector::~vector()
	{
		
	}
	vector::vector(double c, double b, Mode mod )
	{
		if (mod == 0)
		{
			x = c;
			y = b;
			mode = mod;
			rtoj();
		}
		else if(mod == 1)
		{
			p = c;
			a = b;
			mode = mod;
			jtor();
		}
	}
	void vector::reset(double a, double b, Mode mod )
	{
		if (mode ==	R)
		{
			x = a;
			y = b;
			rtoj();
		}
		else if (mode == J)
		{
			p = a;
			p = b;
			jtor();
		}
	}
	void vector::operator++(int a)
	{
		x = x + 1;
		y = y + 1;
	}
	vector vector::operator+(const vector& a)
	{
		vector temp;
		temp.x=x + a.x;
		temp.y = y + a.y;
		temp.rtoj();
		return temp;
	}
	vector vector::operator*(int a)const
	{
		vector temp;
		temp.x = x *a;
		temp.y = y *a;
		temp.rtoj();
		return temp;
	}
	vector operator*(int a,const vector& b)
	{
		return b * a;
	}
	std::ostream& operator<<( std::ostream& os, const vector& b)
	{
		os << b.x << " " << b.y << " " << b.p << " " << b.a<<" "<<b.mode;
		return os;
	}
}