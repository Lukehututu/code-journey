#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>
#include<algorithm>


//string �Ĺ��캯��
void test01()
{
	//1.ֱ�ӹ���--string()������һ�����ַ���
	string str1;

	//2.��ֵ����
	//const char arr[] = "hello world";
	const char* arr = "hello world";
	string str2(arr);
	cout << "str2 = " << str2 << endl;

	//3.��������
	string str3(str2);
	cout << "str3 = " << str3 << endl;

	//4.�ַ�����
	string str4(10, 'a');
	cout << "str4 = " << str4 << endl;
}

//int main()
//{
//	test01();
//}



//string�ĸ�ֵ����

void test02()
{
	//1.c�����ַ���=��ֵ
	string s1;
	s1 = "hello1";
	cout << "s1 = " << s1 << endl;

	//2.�ַ�=��ֵ
	string s2;
	s2 = 'a';
	cout << "s2 = " << s2 << endl;

	//3.�ַ���=��ֵ
	string s3;
	s3 = s1;
	cout << "s3 = " << s3 << endl;

	//4.assign
	string s4;
	s4.assign("hello4");
	cout << "s4 = " << s4 << endl;

	//5.assign(const char* str,int n)
	string s5;
	s5.assign("hello5 world",6);
	cout << "s5 = " << s5 << endl;

	//6.assign(const string& str)
	string s6;
	s6.assign(s5);
	cout << "s6 = " << s6 << endl;

	//7.assign(int n,char c)
	string s7;
	s7.assign(5,'w');
	cout << "s7 = " << s7 << endl;
}

//int main()
//{
//	test02();
//
//}

//string �ַ���ƴ��

void test03()
{
	//1.+= c�ַ���
	string s1 = "��";
	s1 += "������Ϸ";
	cout << s1 << endl;

	//2.+= c�ַ�
	s1 += ':';
	cout << s1 << endl;

	//3.+=string
	string s2 = "LOL DNF";
	s1 += s2;
	cout << s1 << endl;

	//4.append c�ַ���
	string s3 = "I";
	s3.append(" Love");
	cout << s3 << endl;

	//5.append c�ַ�����ǰn���ַ�
	s3.append(" APEX LOL",6);
	cout << s3 << endl;

	//6.append string�ַ���
	s3.append(s2);
	cout << s3 << endl;

	//7.append string�� ��n��λ�ÿ�ʼ��x���ַ�������
	s3.append(s2, 3, 4);
	cout << s3 << endl;

}

//int main()
//{
//	test03();
//}
