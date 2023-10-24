#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


//函数默认值
//int fuc(int a, int b = 20,int c)
//{
//	return a + b + c;
//
//}


//int main()
//{
//	cout << fuc(10,30)<<endl;
//}


//int fuc1(int a = 10, int b = 10);
//
//int fuc1(int a = 10, int b = 10)
//{
//	return a + b;
//}
//
//
//
//int main()
//{
//	cout << fuc1(10, 10) << endl;
//}

//
//void test(int = 10)
//{
//	cout << "this is the test" << endl;
//
//}
//
//
//int main()
//{
//	test(10);
//
//}


//函数重载
//让函数名相同提高函数的复用性


//void fuc(int a,int b)
//{
//	cout << "我是fuc" << endl;
//}
//
//int fuc()
//{
//	cout << "你是fuc" << endl;
//}
//
//
//
//int main()
//{
//	fuc();
//	fuc(10, 1);
//
//}

//引用作为函数重载的条件
//void fuc(int& a)  //int & a=10是不合法的
//{
//	cout << "fuc&a" << endl;
//}
//
//void fuc(const int& a) //但const int& a=10合法
//{
//	cout << "const int" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	fuc(a);
//	fuc(10);
//}


//函数重载碰到默认参数
//void test(int a, int b = 10)
//{
//	cout << 1 << endl;
//}
//
//void test(int a)
//{
//	cout << 2 << endl;
//}
//
//int main()
//{
//	test(10);
//
//}

#define PI 3.14
//设计一个圆类来求圆的周长
//圆求周长的公式

class Circle
{
	//访问权限


	//公共权限
public:

	//属性
	
	//半径
	int r;

	//行为
	double CalculateC()
	{
		return 2 * PI * r;
	}


};

//int main()
//{
//	//通过类创建一个对象
//	Circle c;
//	//初始化对象的属性
//	c.r = 10;
//	//发生对象的行为
//	cout << "圆的周长为" << c.CalculateC() << endl;
//}

//class Student
//{
//
//public:
//	string name;
//	string idnum;
//
//	void print()
//	{
//		/*cin >> name >> idnum;*/
//		cout << " 学生的姓名为" << name << "\t学生的学号为" << idnum << endl;
//	}
//
//	void setname(string na)
//	{
//		name = na;
//	}
//};
//
//int main()
//{
//	Student S;
//	//S.name = "胡梓熙";
//	S.setname("HUZIXI");
//	S.idnum = "8214200406";
//	S.print();
//}


class person
{
public: //公共权限
	string name;
protected:
	string car;
private:
	int password;
public:
	void set()
	{
		name = "张三";
		car = "benz";
		password = 123456;
	}
};

int main()
{
	person fat;
	fat.name = "sha";
	fat.



}