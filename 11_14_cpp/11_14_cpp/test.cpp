#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��Ԫ
class Building
{
    friend void Gaymate();

public:

    //����һ�����캯����ʼ����������
    Building()
    {
        m_sittingroom = "����";
        m_bedroom = "����";
    }

    string m_sittingroom;
private:
    string m_bedroom;
};


void Gaymate()
{
    Building B;
    cout << "Gaymate�ڷ���Building��" << B.m_sittingroom << endl;
    cout << "Gaymate�ڷ���Building��" << B.m_bedroom << endl;

}

int main()
{
    Gaymate();
}

//����Ϊ��Ԫ

//�����ں������� ���涨��ǰ������
class Building;



class GoodGay
{
public:
	GoodGay();

	void visit();


public:
	Building* B;
	
};

class Building
{

	friend class GoodGay;

public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;

};

Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

void GoodGay::visit()
{
	cout << "�������ڷ���Building��" << B->m_sittingroom << endl;
	cout << "�������ڷ���Building��" << B->m_bedroom << endl;
}

//�����ⶨ���Ա����
GoodGay::GoodGay()
{
	B = new Building;
}


int main()
{
	GoodGay gg;
	gg.visit();
}



class Building;

class GoodGay
{
public:
	GoodGay();

	void visit();
	void visit2();


public:
	Building* B;
	
};

class Building
{

	friend void GoodGay::visit();

public:
	Building();
public:
	string m_sittingroom;
private:
	string m_bedroom;

};

Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

void GoodGay::visit()
{
	cout << "visit���ڷ���Building��" << B->m_sittingroom << endl;
	cout << "visit���ڷ���Building��" << B->m_bedroom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2���ڷ���Building��" << B->m_sittingroom << endl;

}

//�����ⶨ���Ա����
GoodGay::GoodGay()
{
	B = new Building;
}


int main()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}


