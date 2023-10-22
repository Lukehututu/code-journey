#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

//��ջ��ʵ������ƥ������

//���ȶ���һ��ջ���Ծ�̬����Ϊ����
#define MaxSize 10

typedef struct
{
	char data[MaxSize];
	int top;
}SqStack;



void Push(SqStack q, char c);
void Pop(SqStack q);
void InitStack(SqStack s);

//����ƥ����ܣ���������Ҫ�ڽ��к�����װ
//char str[]�Ǵ�������һ�����ŵ��ַ�����������((()))
bool MatchBracket(char str[])
{
	//�ȳ�ʼ��һ��ջ�����������
	SqStack s = {0};
	//��ʼ��ջ
	InitStack(s);
	//����ƥ��

	//�ȴ�������ʶ�����ʶ��������(����ջ,ʶ��һ�����ͳ�ջͬʱӦ���Ǹ�ѭ��
	int i = 0;
	while (str[i])
	{
		//���ɨ�赽(��ջ
		if (str[i] == '(')
			Push(s, str[i]);
		//���ɨ�赽)
		else
		{
			//�ȼ��ջ���Ƿ���Ԫ�أ�����о�˵��)����ƥ��ʧ��
			if (StackEmpty(s))
				return false;
			//���û��Ԫ�أ��ͳ�ջȻ��ʼƥ��
			char* TopElem;
			*TopElem = 0;
			Pop(s, TopElem);
			if (str[i] == ')' && *TopElem != '(')
				return false;
		}
		i++;
	}
	//���ջ�գ�˵��ƥ��ɹ�
	if (StackEmpty(s) == -1)
		return true;
}


//��װһ����ջ����
void Push(SqStack q, char c)
{
	//�ж�ջ�Ƿ�����
	if (q.top == MaxSize - 1)
		return ;
	//��ջ
	q.data[++q.top] = c;
	return;
}

//��װһ����ջ����
void Pop(SqStack q,char* TopElem)
{
	//�ж��Ƿ�Ϊ��ջ
	if (q.top == -1)
	//�˴����� ���)���࣬�Ǿͻ���ֿ�ջ�����
		return;
	q.data[q.top--] = 0;
	return;
}

//��װһ����ʼ������
void InitStack(SqStack s)
{
	s.top = -1;
}

//��װһ�����ջ�յĺ���
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