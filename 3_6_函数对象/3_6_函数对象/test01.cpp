#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<vector>
#include<algorithm>


//1.* ����������ʹ��ʱ����������ͨ������������, �����в����������з���ֵ
//2.* �������󳬳���ͨ�����ĸ����������������Լ���״̬
//3.* �������������Ϊ��������



class MyAdd
{
public:
	int operator()(int &v1, int &v2) const
	{
		return v1 + v2;
	}

};

class Myprint
{
public:
	int mycnt;

	Myprint()
	{
		mycnt = 0;
	}

	void operator()(string line) 
	{
		cout << line << endl;
		mycnt++;
	}
	

};

void test()
{
	MyAdd a;
	int v1 = 1;
	int v2 = 2;
	cout << a(v1,v2) << endl;
}

void test02()
{
	Myprint p;
	p("hello c");
	p("hello c");
	p("hello c");
	p("hello c");
	cout << p.mycnt << endl;

}

void doprint(Myprint p, string line)
{
	p(line);
}

void test03()
{
	Myprint p;
	doprint(p, "hello python");

}

//���ص���bool���͵ķº�����Ϊν��
//operator()����һ��������һԪν��
//operator()�������������Ƕ�Ԫν��

class Comp5
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}

};


void test04()
{
	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
	}

	//�������д��������
	Comp5 c;
	vector<int>::iterator it = find_if(v.begin(), v.end(),c );//��findһ�����ص�����
	//����ֱ������������
	//find_id(v.begin(), v.end(),Comp5());

	if (it == v.end())
	{
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << endl;
		cout << "����Ϊ��" << *it << endl;
	}

}

class MyCom
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};


void test05()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end();++it)
	{
		cout << *it << ' ';
	}
	cout << endl;

	sort(v.begin(), v.end(), MyCom());
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;

}

int main()
{
	/*cout << "test01" << endl;
	test();
	cout << "test02" << endl;
	test02();
	cout << "test03" << endl;
	test03();*/
	//test04();
	test05();
}