#pragma once
#include<string>
class stock
{
private:
	std::string name;
	//const int month=12;     //�����ǲ��е�  ���ȴ������滻���������ʱ��û�ж����ǲ��ᴴ����
	//enum{month=12};        //����ok
	//static const int month=12;  //����Ҳok
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
	~stock() {};           //��������д��д����ν����д���������ϣ�������ھͻ���ã��ͷ��ڴ�
};