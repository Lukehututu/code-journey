#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>

#define MAX_LEN 255

//定义一个串（方法四，浪费第一个空间，同时新建一个变量length）
struct SString
{
	int length;
	char ch[MAX_LEN];
};




//求子串(用SUB返回串S的第pos个字符(此时他的数组下标实际上也是pos)起长度为len的子串)
bool SubString(SString* Sub, SString* S, int pos, int len)
{ 
	//检查求子串的长度有没有越界
	if (pos+len-1>S->length)
		return false;
	for (int i = 0; i < len; i++)
	{
		Sub->ch[i+1] = S->ch[pos + i];
	}
	Sub->length = len;
	return true;
}



//串的比较(大于返回正数，等于返回0，小于返回负数)
int StrCmp(SString S, SString T)
{
	int i = 1;
	for (i = 1; i <= S.length && i <= T.length; i++)
	{
		if (S.ch[i] != T.ch[i])
			return S.ch[i] - T.ch[i];
	}
	return S.length - T.length;

}


//求子串在主串中的位置(找的到就返回首次出现的地址，找不到就返回0)
int index(SString S,SString T)
{
	SString Sub;
	//用sub函数找相同长度的子串，用sub接收，再用strcmp比较
	for (int i = 1; i < S.length-T.length+1; i++)
	{
		SubString(&Sub, &S, i, T.length);
		if (StrCmp(T, Sub) == 0)
			return i;
	}
	return 0;
}


//朴素模式匹配算法//暴力匹配法
int Index(SString S, SString T)
{
	int i = 1, j = 1;
	while (i <= T.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 2;
			j = 1;
		}
	}
	if (j > T.length)
		return i - T.length;
	return 0;
}


//KMP算法
int Index_KMP(SString S, SString T, int next[])
{
	int i = 1, j = 1;
	while (i <= T.length && j <= T.length)
	{
		if (S.ch[i] == T.ch[j] || j==0)
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j > T.length)
		return i - T.length;
	else
		return 0;
}


//求next数组
void get_next(SString T, int next[])
{
	int i = 2, j = 0;
	next[1] = 0;
	while ()
	{
		if()


	}




}