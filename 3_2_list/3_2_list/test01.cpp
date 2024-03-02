#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<list>

void printlist(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); ++it)
	{
		cout << *it << ' ';
	}
	cout << endl;
}


//list���캯��
void test01()
{
	//1.Ĭ�Ϲ���
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printlist(L1);

	//2.���������乹��
	list<int>L2(L1.begin(), L1.end());
	printlist(L2);

	//3.��������
	list<int>L3(L2);
	printlist(L3);

	//4.n��elem����
	list<int>L4(4, 10);
	printlist(L4);


}

//list�ĸ�ֵ�ͽ���
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printlist(L1);

	//assign(����������)
	list<int>L2;
	L2.assign(L1.begin(), L1.end());
	printlist(L2);

	//assign(n,elem)
	list<int>L3;
	L3.assign(3, 5);
	printlist(L3);

	//=��ֵ
	list<int>L4;
	L4 = L3;
	printlist(L4);

	//swap��������
	cout << "����ǰ" << endl;
	printlist(L2);
	printlist(L3);

	cout << "������" << endl;
	L2.swap(L3);
	printlist(L2);
	printlist(L3);

}

//list�Ĵ�С����
void test03()
{
	list<int>L1 = {1,2,3,4};

	printlist(L1);

	cout << "��ʱ�����Ĵ�СΪ��" << L1.size() << endl;
	if (L1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
		cout << "��ʱ�����Ĵ�СΪ��" << L1.size() << endl;
	}

	L1.resize(10);
	printlist(L1);

	L1.resize(15, 5);
	printlist(L1);


}

//list�����Ĳ����ɾ��
//*push_back(elem);//������β������һ��Ԫ��
//*pop_back();//ɾ�����������һ��Ԫ��
//*push_front(elem);//��������ͷ����һ��Ԫ��
//*pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//*insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//*insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//*insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//*clear();//�Ƴ���������������
//*erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//*erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//*remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�

void test04()
{
	list<int> L;
	//ͷ��β��
	L.push_back(10);
	L.push_back(20);
	L.push_front(200);
	L.push_front(100);
	printlist(L);
	//ͷɾβɾ
	L.pop_back();
	L.pop_front();
	printlist(L);
	//insert
	list<int>::iterator it = L.begin();
	L.insert(it, 500);
	L.insert(it, 6, 600);
	printlist(L);

	//erase
	//��ʱ���it����ָ��ԭʼ�ĵ�һλ
	L.erase(it);//����֮�����ԭʼ�ĵ�һλ��û�ˣ����it����Ұ������
	printlist(L);

	//���֮����ִ������Ĵ����Ǿͻ��ɷǷ�����
	//L.erase(it, ++it);
	//printlist(L);
	//���Ҫ���¸�ֵ������
	list<int>::iterator ite = L.begin();
	L.erase(ite,++ite);
	printlist(L);

	//remove;
	L.remove(600);
	printlist(L);

	//clear
	L.clear();





}




//int main()
//{
//	//test01();
//	//test02();
//	//test03();
//	test04();
//}