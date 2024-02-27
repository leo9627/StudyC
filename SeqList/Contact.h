#pragma once
#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 12
typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char gender[GENDER_MAX];
	char tel[TEL_MAX];
}Info;
struct SQL;
typedef struct SQL Contact;
//添加联系人
void InfoADD(Contact*ps);
void ContactDel(Contact* ps);
void ContactFind(Contact* ps);
void ContactShow(Contact* ps);
void ContactRe(Contact* ps);