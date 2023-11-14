#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//友元
class Building
{
    friend void Gaymate();

public:

    //先来一个构造函数初始化两个变量
    Building()
    {
        m_sittingroom = "客厅";
        m_bedroom = "卧室";
    }

    string m_sittingroom;
private:
    string m_bedroom;
};


void Gaymate()
{
    Building B;
    cout << "Gaymate在访问Building的" << B.m_sittingroom << endl;
    cout << "Gaymate在访问Building的" << B.m_bedroom << endl;

}

int main()
{
    Gaymate();
}

//类作为友元

//类似于函数声明 后面定义前面声明
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
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

void GoodGay::visit()
{
	cout << "基友正在访问Building的" << B->m_sittingroom << endl;
	cout << "基友正在访问Building的" << B->m_bedroom << endl;
}

//在类外定义成员函数
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
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

void GoodGay::visit()
{
	cout << "visit正在访问Building的" << B->m_sittingroom << endl;
	cout << "visit正在访问Building的" << B->m_bedroom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2正在访问Building的" << B->m_sittingroom << endl;

}

//在类外定义成员函数
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


