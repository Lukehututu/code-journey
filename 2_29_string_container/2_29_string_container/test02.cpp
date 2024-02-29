#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>
#include<algorithm>



//字符串查找和替换

void testa()
{
	//查找
	string str1 = "abcdefgde";
	int index = str1.find("de");
	if (index == EOF)
	{
		cout << "未找到子串" << endl;
	}
	else
		cout << "找到了，pos = " << index << endl;

	//rfind是从右往左找，但返回的pos还是从左往右的位置
	cout << "rfine = " << str1.rfind("de") << endl;



}


void testb()
{
	//替换
	string str2 = "abcdefg";
	str2.replace(1, 3, "1111");
	cout << "str2 = " << str2 << endl;
	str2.replace(1, 3, "1");
	cout << "str2 = " << str2 << endl;
}


void testc()
{
	string str3 = "hello";
	string str4 = "hello";
	if (str3.compare(str4) == 0)
	{
		cout << "str3 = str4" << endl;
	}
	else if(str3.compare(str4) > 0)
	{
		cout << "str3 > str4" << endl;
	}
	else if (str3.compare(str4) < 0)
	{
		cout << "str3 < str4" << endl;
	}
}

//string 字符存取操作
void testd()
{
	string str = "hello";
	
	//两种方法访问字符
	//1.用[]的方式
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//2.用at()的方式访问
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	//也可以用这两种方式来修改字符
	//1.
	str[0] = 'x';
	cout <<"str = "<< str << endl;

	//2.
	str.at(1) = 'x';
	cout << "str = " << str << endl;
}

//字符串的插入和删除
void teste()
{
	//插入
	string s = "hello";
	s.insert(1, "111");
	cout << "s = " << s << endl;

	//删除
	s.erase(1, 3);
	cout << "s = " << s << endl;
}



//获取子串
void testf()
{
	string str = "abcdef";
	string retstr = str.substr(1, 3);
	cout << retstr << endl;
	

}

//用途之一--截取邮箱中用户名信息
void get_ID()
{
	string email = "zhangsan@163.com";
	int pos = email.find('@');
	string ret = email.substr(0, pos);
	cout << ret << endl;
}

int main()
{
	//testa();
	//testb();
	//testc();
	//testd();
	//teste();
	//testf();
	get_ID();
}