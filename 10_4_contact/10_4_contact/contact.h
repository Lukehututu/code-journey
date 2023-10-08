#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define INC_NUM 2
#define DEFAULT_NUM 3 
#define max_name 10
#define max_sex  3
#define max_address 30
#define max_tele 12
#define MAX_NUM  1000
//���͵Ķ���


//�ṹ�嶨��

typedef struct PeoInfo
{
	char NAME[max_name];
	int  AGE;
	char SEX[max_sex];
	char ADDRESS[max_address];
	char TELE[max_tele];
}PeoInfo;


//typedef struct Contact
//{
//	PeoInfo data[MAX_NUM];
//	int sz;
//}Contact;
//��̬�汾

typedef struct Contact
{
	PeoInfo* data;
	int capacity;//��¼��ǰͨѶ¼���������
	int sz;//��¼�Ѿ���ŵ���Ч��Ϣ
}Contact;

//��������
void AddContact(Contact* con);
void InitContact(Contact* pc);
void menu();
void PrintCon(const Contact* pp);
void SUBContact(Contact* pc);
void Search(const Contact* pc);
void Modify(Contact* pc);
void Sort(Contact* pc);
void ExitContact(Contact* pc);
void Load(Contact* pc);
void SaveContact(Contact* pc);