#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//1.引用对应的头文件
#include<fstream>
#include<string>


void test01()
{
	//2.创建流对象
	ofstream ost;
	//3.打开文件
	ost.open("test01.txt",ios::out);
	//4.写数据
	ost << "张三" << endl;
	ost << "18岁" << endl;
	//5.关闭文件
	ost.close();

}

//int main()
//{
//	test01();
//	system("pause");
//}


//读文件


//三种方法
//直接输出到buf
//利用getline
//利用全局getline
//利用getchar

void test02()
{
	
	//2.创建流对象
	ifstream ifs;

	//3.打开文件
	ifs.open("test01.txt",ios::in);
	//还要判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4.读文件

	////case1--将文件内容直接写进buf[]中
	char buf[1024] = { 0 };
	int x = 0;
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//case2--利用fstream_getline函数。格式fstream.getline(char* str,streamsize_Count)
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}

	//case3--利用全局getline函数
	string buf;

	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//case4--利用get一个字符一个字符读
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	char buf[1024] = { 0 };
	ifs >> buf;
	cout << buf;
	ifs >> buf;
	cout << buf;


	ifs.getline(buf, sizeof(buf));
	cout << buf;

	//5.关闭文件
	ifs.close();
}

class Person
{
public:
	char name[64];
	int m_age;
};

	
void test03()
{
	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("Person.txt", ios::out | ios::binary);//  |  位或操作符来表示同时
  	//或者可以结合成一步，ofstream本身就有个构造函数 ofstream ofs("Person.txt",) ios::out | ios::binary);

	Person a = { "张三",18 };

	//4.写文件
	ofs.write((const char*)&a, sizeof(Person));
	//5.关闭文件
	ofs.close();
}

void test04()
{
	//2.创建流对象
	ifstream ifs;
	
	//3.打开文件并判断是否打开成功
	ifs.open("Person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4.读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名： " << p.name << "\t年龄为： " << p.m_age << endl;
	
	//5.关闭文件
	ifs.close();
}

int main()
{
	/*test02();*/
	//test03();
	test04();
}