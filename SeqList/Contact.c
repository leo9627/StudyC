#include"SeqList.h"
void menu()
{
	//printf("----------------------------SHOW----------------------------\n");
	printf("---------------------------通讯录---------------------------\n");
	printf("-----------------1.添加联系人  2.删除联系人-----------------\n");
	printf("-----------------3.查找联系人  4.修改联系人-----------------\n");
	printf("-----------------5.查看联系人  0.  退  出  -----------------\n");
	printf("------------------------------------------------------------\n");
	//printf("  姓名        年龄        性别        电话\n");
	//printf("lvtaotao       23         male     12345678900\n");
}
int main()
{
	Contact c1;
	ContactInit(&c1);
	int a = 0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			InfoADD(&c1);
			break;
		case 2:
			ContactDel(&c1);
			break;
		case 3:
			ContactFind(&c1);
			break;
		case 4:
			ContactRe(&c1);
			break;
		case 5:
			ContactShow(&c1);
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (a);
	ContactDestroy(&c1);
	printf("--------------------------退出成功--------------------------\n");
	return 0;
}