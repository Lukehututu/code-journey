#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string>


//����Ĭ��ֵ
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


//��������
//�ú�������ͬ��ߺ����ĸ�����


//void fuc(int a,int b)
//{
//	cout << "����fuc" << endl;
//}
//
//int fuc()
//{
//	cout << "����fuc" << endl;
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

//������Ϊ�������ص�����
//void fuc(int& a)  //int & a=10�ǲ��Ϸ���
//{
//	cout << "fuc&a" << endl;
//}
//
//void fuc(const int& a) //��const int& a=10�Ϸ�
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


//������������Ĭ�ϲ���
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
//���һ��Բ������Բ���ܳ�
//Բ���ܳ��Ĺ�ʽ

class Circle
{
	//����Ȩ��


	//����Ȩ��
public:

	//����
	
	//�뾶
	int r;

	//��Ϊ
	double CalculateC()
	{
		return 2 * PI * r;
	}


};

//int main()
//{
//	//ͨ���ഴ��һ������
//	Circle c;
//	//��ʼ�����������
//	c.r = 10;
//	//�����������Ϊ
//	cout << "Բ���ܳ�Ϊ" << c.CalculateC() << endl;
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
//		cout << " ѧ��������Ϊ" << name << "\tѧ����ѧ��Ϊ" << idnum << endl;
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
//	//S.name = "������";
//	S.setname("HUZIXI");
//	S.idnum = "8214200406";
//	S.print();
//}


class person
{
public: //����Ȩ��
	string name;
protected:
	string car;
private:
	int password;
public:
	void set()
	{
		name = "����";
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