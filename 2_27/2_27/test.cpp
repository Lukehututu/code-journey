#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//��߽׶� ��Ҫ��� c++���ͱ�� �� STL����
//����ģ����� --1.����ģ�� 2.��ģ��

//����ģ��


template<typename T> //���������ŵĺ�����ģ�庯��
void mySWAP(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//1.�Զ������Ƶ�
//	mySWAP(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << endl;
//	//2.��ʾָ������
//	mySWAP<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//

//ʵ�����Ͳ�����


//����ģ���ע������
//1.�Զ������Ƶ��������Ƴ�һ�µ���������T����ʹ��
//2.ģ�����Ҫȷ����T���������Ͳ���ʹ��

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}



template<typename T>
void fuc()
{
	cout << "fuc�ĵ���" << endl;
}

//void test01()
//{
//	fuc<int>();
//}
//
//int main()
//{
//	test01();
//
//
//	/*int a = 10;
//	char b = '20';
//	swap(a, b);*/
//
//}��




//����������ģ��
//�Խ���Ϊ��
template<typename T>
void orderArr(T arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
				mySWAP(arr[i], arr[j]);
		}
	}
}


template<typename T>
void PrintArr(T arr[],int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
}

void test01()
{
	int intarr[] = { 5,3,8,4,6,1,9,2 };
	int len = sizeof(intarr) / sizeof(int);
	orderArr(intarr, len);
	PrintArr(intarr, len);
}

void test02()
{
	char charr[] = { 'a','f','b','e','d' };
	int len = sizeof(charr) / sizeof(char);
	orderArr(charr, len);
	PrintArr(charr, len);
}

//int main()
//{
//	test01();
//	cout << endl;
//	test02();
//
//
//}


//��ͨ�����뺯��ģ�������

int add01(int a, int b)
{
	return a + b;
}

template<typename T>
T add02(T a,T b)
{
	return a + b;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << add01(a, c) << endl;
//	//1.�����Զ��Ƶ�
//	//cout << add02(a, c) << endl;
//	//2.������ʾ��������
//	cout << add02<int>(a, c) << endl;
//
//}


//��ͨ�����뺯��ģ��ĵ��ù���
//1.�����ͨ������ģ�嶼��ʵ�֣������ȵ�����ͨ����
//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//3.��ģ��Ҳ���Է�������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣

void Print(int a, int b)
{
	cout << "��ͨ��������" << endl;
}

template<class T>
void Print(T a,T b)
{
	cout << "ģ�����" << endl;
}

template<class T>
void Print(T a, T b, T c)
{
	cout << "����ģ�����" << endl;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = '0';
//	char d = '5';
//	Print(c, d);
//	//Print(a, b, 100);
//}


class Person
{
public:
	Person(string name, int age)
	{
		my_name = name;
		my_age = age;
	}
	string my_name;
	int my_age;
};

template<class T>
bool my_Comp(T a, T b)
{
	if (a == b)
		return true;
	else
		return false;
}

template<> bool my_Comp(Person a, Person b)
{
	if (a.my_age == b.my_age && a.my_name == b.my_name)
		return true;
	else
		return false;

}

void testa()
{
	Person a("Tom", 10);
	Person b("Tom", 10);
	bool ret = my_Comp(a, b);
	if (ret)
		cout << "a==b" << endl;
	else
		cout << "a!=b" << endl;
}

int main()
{
	testa();
}