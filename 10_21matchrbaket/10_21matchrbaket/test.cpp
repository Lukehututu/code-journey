#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

//用栈来实现括号匹配问题

//首先定义一个栈（以静态数组为例）
#define MaxSize 10

typedef struct
{
	char data[MaxSize];
	int top;
}SqStack;



void Push(SqStack q, char c);
void Pop(SqStack q);
void InitStack(SqStack s);

//构建匹配大框架，等遇到需要在进行函数封装
//char str[]是传过来的一个括号的字符串，类似于((()))
bool MatchBracket(char str[])
{
	//先初始化一个栈用来存放括号
	SqStack s = {0};
	//初始化栈
	InitStack(s);
	//进行匹配

	//先从左往右识别，如果识别到左括号(就入栈,识别到一个）就出栈同时应当是个循环
	int i = 0;
	while (str[i])
	{
		//如果扫描到(入栈
		if (str[i] == '(')
			Push(s, str[i]);
		//如果扫描到)
		else
		{
			//先检查栈里是否还有元素，如果有就说明)单身，匹配失败
			if (StackEmpty(s))
				return false;
			//如果没有元素，就出栈然后开始匹配
			char* TopElem;
			*TopElem = 0;
			Pop(s, TopElem);
			if (str[i] == ')' && *TopElem != '(')
				return false;
		}
		i++;
	}
	//如果栈空，说明匹配成功
	if (StackEmpty(s) == -1)
		return true;
}


//封装一个入栈函数
void Push(SqStack q, char c)
{
	//判断栈是否已满
	if (q.top == MaxSize - 1)
		return ;
	//入栈
	q.data[++q.top] = c;
	return;
}

//封装一个出栈函数
void Pop(SqStack q,char* TopElem)
{
	//判断是否为空栈
	if (q.top == -1)
	//此处报错 如果)更多，那就会出现空栈的情况
		return;
	q.data[q.top--] = 0;
	return;
}

//封装一个初始化函数
void InitStack(SqStack s)
{
	s.top = -1;
}

//封装一个检查栈空的函数
bool StackEmpty(SqStack s)
{
	if (s.top == -1)
		return true;
	return false;


}

//int main()
//{
//	char s[] = "((()))";
//	int ret = MatchBracket(s);
//	cout << ret << endl;
//
//
//}