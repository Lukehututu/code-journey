#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>

#define MAX_LEN 255

//����һ�����������ģ��˷ѵ�һ���ռ䣬ͬʱ�½�һ������length��
struct SString
{
	int length;
	char ch[MAX_LEN];
};




//���Ӵ�(��SUB���ش�S�ĵ�pos���ַ�(��ʱ���������±�ʵ����Ҳ��pos)�𳤶�Ϊlen���Ӵ�)
bool SubString(SString* Sub, SString* S, int pos, int len)
{ 
	//������Ӵ��ĳ�����û��Խ��
	if (pos+len-1>S->length)
		return false;
	for (int i = 0; i < len; i++)
	{
		Sub->ch[i+1] = S->ch[pos + i];
	}
	Sub->length = len;
	return true;
}



//���ıȽ�(���ڷ������������ڷ���0��С�ڷ��ظ���)
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


//���Ӵ��������е�λ��(�ҵĵ��ͷ����״γ��ֵĵ�ַ���Ҳ����ͷ���0)
int index(SString S,SString T)
{
	SString Sub;
	//��sub��������ͬ���ȵ��Ӵ�����sub���գ�����strcmp�Ƚ�
	for (int i = 1; i < S.length-T.length+1; i++)
	{
		SubString(&Sub, &S, i, T.length);
		if (StrCmp(T, Sub) == 0)
			return i;
	}
	return 0;
}


//����ģʽƥ���㷨//����ƥ�䷨
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


//KMP�㷨
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


//��next����
void get_next(SString T, int next[])
{
	int i = 2, j = 0;
	next[1] = 0;
	while ()
	{
		if()


	}




}