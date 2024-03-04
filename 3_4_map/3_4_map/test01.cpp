#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<map>

//map����
//map�е�����Ԫ�ض���pair<key,value>

void printmap(map<int,int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "key:" << (*it).first << " \tvalue:" << (*it).second << endl;
	}
	cout << endl;
}

void test()
{
	//Ĭ�Ϲ���
	map<int, int>m1;
	//����ʱ�����ù���pair�������������ʽ����
	m1.insert(pair<int, int>(1, 10));//�˴�ʵ���Ͼ��Ǵ���һ��pair����������
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	printmap(m1);

	//��������
	map<int, int>m2(m1);
	printmap(m2);

	//=��ֵ
	map<int, int>m3;
	m3 = m2;
	printmap(m3);
}


//map��С�ͽ���
void test1()
{
	//Ĭ�Ϲ���
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 50));
	m2.insert(pair<int, int>(5, 60));
	m2.insert(pair<int, int>(6, 90));

	if (m1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "������СΪ��" << m1.size() << endl;
	}

	cout << "����ǰ" << endl;
	printmap(m1);
	printmap(m2);
	cout << "������" << endl;
	m1.swap(m2);
	printmap(m1);
	printmap(m2);

}

//map�Ĳ����ɾ��
void test2()
{
	//���ֲ���
	//1.pair<>��ʽ
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));

	//2.make_pair��ʽ
	m.insert(make_pair(2, 20));

	//3.map<int,int>::value_type()��ʽ
	m.insert(map<int, int>::value_type(3, 30));

	//4.[]��ʽ���루�����Ƽ�����[]�ʺ���������
	m[4] = (4, 40);

	/*cout << m[5] << endl;*/
	printmap(m);

	//1.ɾ��ָ��������λ��
	m.erase(m.begin());
	printmap(m);

	//2.ɾ��ָ��keyֵ��Ԫ��
	m.erase(2);
	printmap(m);
	
	//3.ɾ��ָ������������
	m.erase(m.begin(), ++m.begin() );
	printmap(m);

	//clear���
	m.clear();
	printmap(m);




}


//map�Ĳ��Һ�ͳ��
void test3()
{
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "�ҵ���" << endl;
		cout << "key = " << pos->first << "\tval = " << pos->second << endl;
	}
	else
	{
		cout << "û�ҵ�" << endl;
	}

	cout << "key = 3��Ԫ���У�" << m.count(3) << endl;

}


class MyCom
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}

};

//map��������
void test4()
{
	map<int, int,MyCom>m;
	m.insert(make_pair(2, 20));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(3, 30));
	for (map<int, int,MyCom>::iterator it = m.begin(); it != m.end(); ++it)
	{
		cout << "key = " << (*it).first << "\tval = " << (*it).second << endl;
	}
}

int main()
{
	//test();
	//test1();
	//test2();
	//test3();
	test4();
}