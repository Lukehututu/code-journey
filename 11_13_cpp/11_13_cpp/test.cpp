#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


class Person
{
	int a;
	static int b;//��̬��Ա�����ڴ治��������
	void fuc() { ; }//��Ա�������ڴ�Ҳ����������
	static void fuc2() { ; }//��̬��Ա�������ڴ治��������


};

void test01()
{
	Person p;  //�ն���ռ�ڴ�ռ�Ϊ1B����Ϊ�����ָ����ն�����ÿ������ĵ�ַ���ظ���
	cout << "P'size = " << sizeof(p) << endl;

}


int main()
{
	test01();
}


//thisָ��

//1.������Ƴ�ͻ
class Person
{
public:
	int age;
	Person(int age)
	{
		this->age = age;//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
						//�ڴ�����о���ָ��p1
	}

	Person fuc(Person& p)
	{
		this->age += p.age;
		return *this;
	}

};


void test02()
{
	Person p1(10);
	Person p2(10);
	p2.fuc(p1).fuc(p1);
	cout << "p2������Ϊ" << p2.age << endl;

}



void test01()
{
	Person p1(10);
	Person p2(10);
	cout << "p1������Ϊ" << p1.age << endl;


}

int main()
{
	//test01();
	test02();
}


//��ָ����ʳ�Ա����
class Person
{
public:
	int age;
	void showPersonClass()
	{
		cout << "Person class" << endl;
	}
	void showPersonAge()
	{
		if (this == NULL)
			return;
		cout << age << endl;
	}
};

void test04()
{
	Person* p = NULL;
	//p->showPersonClass();
	p->showPersonAge();
}

int main()
{
	test04();
}

//const���εĳ�Ա����
class Person
{
public:
	//����this��һ��ָ�볣������Person* const this ʹ��ָ��ָ��Ķ��󲻿��޸ģ�Ҳ����˵this=NULL�ǲ��������
	//�ڳ�Ա�����������const���൱�� const Person* const this;���ʹ��thisָ��Ķ����ֵҲ�����޸��ˡ�
	void fuc() const  //���ǳ������ĺ���Ϊ������
	{
		a = 100;//�������û�б���
		b = 10;//�����൱��this->b=10;����ǷǷ�����Ϊ*this��const������
	}

	void fuc2()
	{
		b = 100;
	}

	mutable int a;//����Щ����ı�����Ҫ�޸�����Ҫ��mutable���Σ�������ʹ�ڳ����������ǳ����������˻����޸ġ�
	int b;
};

void test06()
{
	const Person p;//��ʱp��const���α���˳�����,��˳����������Ҳ�ǲ������Ա��޸ĵ�
	p.a = 100;//���˴�a��mutable�����ˣ������ܹ�����
	p.b = 10;//��һ��ı����Ͳ��ܱ�����
	p.fuc2();//��ʱp�ǳ������������fuc2���൱�ڰ�b���ˣ���ʵ����b�ǲ��ܸĵģ���˳������ܵ���һ�㺯��
	p.fuc();//������ֻ�ܵ��ó���������Ϊ�����������ʺͳ�������һ���ģ����Զ������޸ģ���
}