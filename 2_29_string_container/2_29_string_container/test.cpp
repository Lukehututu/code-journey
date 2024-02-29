#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>
#include<algorithm>


//string 的构造函数
void test01()
{
	//1.直接构造--string()构造了一个空字符串
	string str1;

	//2.传值构造
	//const char arr[] = "hello world";
	const char* arr = "hello world";
	string str2(arr);
	cout << "str2 = " << str2 << endl;

	//3.拷贝构造
	string str3(str2);
	cout << "str3 = " << str3 << endl;

	//4.字符构造
	string str4(10, 'a');
	cout << "str4 = " << str4 << endl;
}

//int main()
//{
//	test01();
//}



//string的赋值操作

void test02()
{
	//1.c风格的字符串=赋值
	string s1;
	s1 = "hello1";
	cout << "s1 = " << s1 << endl;

	//2.字符=赋值
	string s2;
	s2 = 'a';
	cout << "s2 = " << s2 << endl;

	//3.字符串=赋值
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

//string 字符串拼接

void test03()
{
	//1.+= c字符串
	string s1 = "我";
	s1 += "爱玩游戏";
	cout << s1 << endl;

	//2.+= c字符
	s1 += ':';
	cout << s1 << endl;

	//3.+=string
	string s2 = "LOL DNF";
	s1 += s2;
	cout << s1 << endl;

	//4.append c字符串
	string s3 = "I";
	s3.append(" Love");
	cout << s3 << endl;

	//5.append c字符串的前n个字符
	s3.append(" APEX LOL",6);
	cout << s3 << endl;

	//6.append string字符串
	s3.append(s2);
	cout << s3 << endl;

	//7.append string的 从n个位置开始的x个字符的内容
	s3.append(s2, 3, 4);
	cout << s3 << endl;

}

//int main()
//{
//	test03();
//}
