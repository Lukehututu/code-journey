#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<stack>

//stack����
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "s�Ĵ�СΪ" << s.size() << endl;

	while (!s.empty())
	{
		cout << "ջ��Ԫ��Ϊ" << s.top() << endl;
		s.pop();
	}
	cout << "s�Ĵ�СΪ" << s.size() << endl;


}


//int main()
//{
//	test01();
//}