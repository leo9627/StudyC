#pragma once

#include<iostream>
class my_string
{
private:
	char* s;
	int len;
	static int num;
public:
	my_string();
	my_string(const char* a);
	my_string( my_string& a);//���ƹ��캯��������������������
	~my_string();
	my_string&  operator=(my_string& s2);  //��ֵ����
	char& operator[](int i);
	friend std::ostream& operator<<(std::ostream& os, const my_string& s2);  
	static int numn();
	int len1();
};