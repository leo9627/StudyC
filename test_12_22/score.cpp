#define _CRT_SECURE_NO_WARNINGS
#include"data.h"
int my_string::num = 0;
my_string::my_string(const char* a)
{
	len = strlen(a);
	s = new char[len + 1];
	strcpy(s, a);
	num++;
}
my_string::my_string()
{
	len = strlen("hello");
	s = new char[len + 1];
	strcpy(s, "hello");
	num++;
}
my_string::my_string(my_string& a)
{
	len = a.len;
	s = new char[len + 1];
	strcpy(s, a.s);
	num++;
}
my_string::~my_string()
{
	delete[]s;
	num--;
}
my_string&  my_string::operator=(my_string& s2)
{
	delete[]s;
	len = s2.len;
	s = new char[len + 1];
	strcpy(s, s2.s);
	return *this;
}
char& my_string::operator[](int i)
{
	return s[i];
}
std::ostream& operator<<(std::ostream& os,const  my_string& s2)
{
	os << s2.s;
	return os;
}
int my_string::numn()
{
	return num;
}
int my_string::len1()
{
	return len;
}