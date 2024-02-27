#include"data.h"
#include<iostream>

int main()
{
	my_string s1 = "lvtaotao";
	s1[2] = 'l';
	std::cout << s1.numn()<<std::endl;
	std::cout << s1.len1();
	return 0;
}