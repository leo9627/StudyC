#include"brass.h"
using namespace std;
int main()
{
	brass mike("mike", 100000, 500);
	mike.deposit(20);
	mike.withdraw(100);
	//mike.show();
	//brassplus mikeplus(mike,500,2);
	brassplus mikeplus=mike;
	mikeplus.show1(5);
	/*mikeplus.show();
	mikeplus.withdraw(660);*/
	//mikeplus.show();
	/*mikeplus.deposit(200);
	mikeplus.show();*/
	brass* ptr = &mikeplus;
	ptr->show1();
	return 0;
}