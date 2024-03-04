#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<set>

void printset(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

}

void test01()
{
	//��ͨ����
	set<int> s;
	
	//insert
	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(4);

	//����Ԫ�ز�����Զ�����
	//��������ͬԪ�ش��ڣ��������岻��ȥ��
	printset(s);


	//��������
	set<int> s2(s);
	printset(s2);
}


//set��С�ͽ���
void test02()
{
	set<int> s1;
	s1.insert(1);
	s1.insert(3);
	s1.insert(2);
	s1.insert(4);
	printset(s1);

	if (s1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "��ʱ�����Ĵ�СΪ:" << s1.size() << endl;
	}

	set<int>s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	cout << "����ǰ" << endl;
	printset(s1);
	printset(s2);

	cout << "������" << endl;
	s1.swap(s2);
	printset(s1);
	printset(s2);
}


//set�Ĳ����ɾ��
void test03()
{
	//����
	set<int>s1;

	s1.insert(1);
	s1.insert(3);
	s1.insert(4);
	s1.insert(2);
	printset(s1);

	//ɾ��--erase
	//1.ɾ��������ָ���λ��
	s1.erase(s1.begin());//�˴���beginָ��ľ����������ĵ�һλ��������˳���޹أ���
	printset(s1);

	//2.ɾ��ָ����ֵ��Ԫ��
	s1.erase(2);
	printset(s1);

	//3.ɾ��������ָ��������
	s1.erase(s1.begin(), s1.end());
	printset(s1);

	////�������Ԫ��clear
	//s1.clear();

}


//set�Ĳ�����ͳ��
void test04()
{
	set<int>s;
	s.insert(1);
	s.insert(3);
	s.insert(5);
	s.insert(4);

	//find()��Ա����������һ��������������ҵ��˸�Ԫ���Ƿ��ظ�Ԫ�صĵ�������Ӧ��λ��
	//���û�ҵ��򷵻�end()
	if (s.find(3) != s.end())
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}

	//ͳ�Ƹ���--count()--����Ϊset�в��������ظ���Ԫ�����count���ֻ����0��1
	cout << "s��1�ĸ���Ϊ:" << s.count(1) << endl;

}


//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//
//
//
//}