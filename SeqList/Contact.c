#include"SeqList.h"
void menu()
{
	//printf("----------------------------SHOW----------------------------\n");
	printf("---------------------------ͨѶ¼---------------------------\n");
	printf("-----------------1.�����ϵ��  2.ɾ����ϵ��-----------------\n");
	printf("-----------------3.������ϵ��  4.�޸���ϵ��-----------------\n");
	printf("-----------------5.�鿴��ϵ��  0.  ��  ��  -----------------\n");
	printf("------------------------------------------------------------\n");
	//printf("  ����        ����        �Ա�        �绰\n");
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
		printf("�����룺");
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
			printf("����������������룺\n");
			break;
		}
	} while (a);
	ContactDestroy(&c1);
	printf("--------------------------�˳��ɹ�--------------------------\n");
	return 0;
}