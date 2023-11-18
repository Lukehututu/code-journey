#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//继承
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册……" << endl;
	}

	void footer()
	{
		cout << "帮助中心、交流合作、站内地图……" << endl;
	}


};

class Java:public BasePage
{
public:

	void content()
	{
		cout << "Java学习路线……" << endl;
	}

};


class Python:public BasePage
{
public:
	void content()
	{
		cout << "Python学习路线……" << endl;
	}
};

void test()
{
	Java jv;
	Python py;
	jv.header();
	jv.footer();
	jv.content();
	cout << "***********************************" << endl;
	py.header();
	py.footer();
	py.content();

}

int main()
{
	test();
	system("pause");
}