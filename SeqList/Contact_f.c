#include"SeqList.h"
int Find(Contact* ps, char* name)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->arr[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void InfoADD(Contact* ps)
{
	SLcheck(ps);
	Info temp;
	printf("���������֣�");
	scanf("%s", temp.name);
	printf("���������䣺");
	scanf("%d", &temp.age);
	printf("�������Ա�");
	scanf("%s", temp.gender);
	printf("������绰��");
	scanf("%s", temp.tel);
	SLPushBack(ps,temp);
}
void ContactFind(Contact* ps)
{
	assert(ps);
	char name[NAME_MAX];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int ret = Find(ps, name);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}
	printf("  ����          ����        �Ա�          �绰\n");
	printf("%-17s%-11d%-11s%s\n",
		((ps->arr) + ret)->name, ((ps->arr) + ret)->age,
		((ps->arr) + ret)->gender, ((ps->arr) + ret)->tel);
}
void ContactDel(Contact* ps)
{
	char name1[NAME_MAX];
	printf("������ɾ������ϵ�ˣ�");
	scanf("%s", name1);
	int ret = Find(ps, name1);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}
	SLPop(ps, ret);
	printf("ɾ���ɹ���\n");
}
void ContactShow(Contact* ps)
{
	printf("  ����          ����        �Ա�          �绰\n");
	for (int i = 0; i < ps->size; i++)
	{
		printf("%-17s%-11d%-11s%s\n",
			((ps->arr) + i)->name, ((ps->arr) + i)->age,
			((ps->arr) + i)->gender, ((ps->arr) + i)->tel);
	}
}
void ContactRe(Contact* ps)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸ĵ���ϵ�ˣ�");
	scanf("%s", name);
	int ret = Find(ps, name);
	if (ret < 0)
	{
		printf("δ�ҵ�\n");
		return;
	}
	printf("���������֣�");
	scanf("%s", ps->arr[ret].name);
	printf("���������䣺");
	scanf("%d",& ps->arr[ret].age);
	printf("�������Ա�");
	scanf("%s", ps->arr[ret].gender);
	printf("������绰��");
	scanf("%s", ps->arr[ret].tel);
}
void ContactInit(Contact* ps)
{
	SLInit(ps);
	FILE* fo = fopen("Contact.text", "rb");
	if (fo == NULL)
	{
		return;
	}
	Info temp;
	while (fread(&temp, sizeof(Info), 1, fo))
	{
		SLPushBack(ps, temp);
	}
	fclose(fo);
	fo = NULL;
}
void ContactDestroy(Contact* ps)
{
	FILE* fo = fopen("Contact.text", "wb");
	assert(fo);
	for (int i = 0; i < ps->size; i++)
	{
		fwrite(ps->arr + i, sizeof(Info), 1, fo);
	}
	fclose(fo);
}