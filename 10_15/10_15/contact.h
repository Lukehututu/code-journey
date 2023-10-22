#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//定义宏
#define MAX 1000
#define INC 3
#define DEFAULT 3

//定义结构体
typedef struct PeoInfo
{
	char name[20];
	char sex;
	int age;
	char num[14];
	char add[20];
}PeoInfo;


typedef struct Contact
{
	PeoInfo* S;
	int capcity;
	int sz;
}Con;



//函数声明
void InitCon(Con* pc);
void Add(Con* pc);
void Print(Con* pc);
void Sub(Con* pc);
void Ser(Con* pc);
void Mod(Con* pc);
void Exit(Con* pc);
void Des(Con* pc);


