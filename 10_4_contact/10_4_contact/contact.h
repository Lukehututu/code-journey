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
//类型的定义


//结构体定义

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
//静态版本

typedef struct Contact
{
	PeoInfo* data;
	int capacity;//记录当前通讯录的最大容量
	int sz;//记录已经存放的有效信息
}Contact;

//函数声明
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