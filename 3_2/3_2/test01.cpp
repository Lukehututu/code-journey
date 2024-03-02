#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<stack>

//stack容器
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "s的大小为" << s.size() << endl;

	while (!s.empty())
	{
		cout << "栈顶元素为" << s.top() << endl;
		s.pop();
	}
	cout << "s的大小为" << s.size() << endl;


}


//int main()
//{
//	test01();
//}