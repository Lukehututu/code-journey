#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<iomanip>

//ö������ÿ��λ�õ�״̬
enum state
{
	empty,
	black,
	white
};

//�������̽ṹ
int map[19][19];

// ��ʾ��ǰ�غ���  ż����ʾ��������  ������ʾ��������
// ��: flag = 20 ��ʾ��ǰ�ǵ�[20]������  �ɺڷ�����
int flag;


// -------------------- service --------------------

//���̳�ʼ��
void init()
{
	//���̳�ʼ��
	for (int i = 0; i < 19; ++i)
	{
		for (int j = 0; j < 19; ++j)
		{
			map[i][j] = 0;
		}
	}

	//��ʼ��������Ϊ0
	flag = 0;
	//��ʱ�Ǻ���������
}


//���ݵ�ǰ���ӽ���ʤ���ж�
bool isWin(int x,int y)
{
	int n = map[x][y];

	//1.�������
	int cnt = 1 ;
	for (int j = y - 1; j >= 0 && map[x - 1][j] == n; j--, cnt++);
	for (int j = y ; j <= 18 && map[x - 1][j] == n; j++, cnt++);
	if (cnt == 5)
		return true;

	//2.�������;
	cnt = 1;
	for (int i = x - 1; i >= 0 && map[i][y - 1] == n; i--, cnt++);
	for (int i = x; i <= 18 && map[i][y - 1] == n; i++, cnt++);
	if (cnt == 5)
		return true;

	//3.б�����--���ϵ�����
	cnt = 1;
	for (int i = x - 1,j = y - 1; i >= 0 && j >= 0 && map[i][j] == n; i--, j--, cnt++);
	for (int i = x ,j = y; i <= 18 && j <= 18 && map[i][j] == n; i++, j++, cnt++);
	if (cnt == 5)
		return true;

	//4.б�����--���µ�����
	cnt = 1;
	for (int i = x - 1,j = y - 1; i >= 0 && j <= 18 && map[i][j] == n; i--, j++, cnt++);
	for (int i = x ,j = y - 2; i <= 18 && j >= 0 && map[i][j] == n; i++, j--, cnt++);
	if (cnt == 5)
		return true;

	return false;
}

//ʤ������
void winView()
{
	cout <<endl<< "**********************************" << endl;
	if (flag < 19 * 19)
	{
		if (flag % 2 == 0)
			cout << setw(19) << "����ʤ��" << endl;
		else
			cout << setw(19) << "����ʤ��" << endl;
	}
	else
		cout << setw(19) << "ƽ��" << endl;
	cout << "**********************************" << endl;

	system("pause");
	system("cls");
}


//��ӡ����
void gameView_ShowMap()
{

	int row = 1;
	cout << setw(3) << ' ';
	while (row < 20)
	{
		cout << left << setw(3) << row;
		++row;
	}
	cout << endl;
	for (int i = 0; i < 19; ++i)
	{
		cout << left << setw(3) << i + 1;
		for (int j = 0; j < 19; ++j)
		{
			cout << left << setw(3) << map[i][j];
		}
		cout << endl;
	}
}

//����
int playerMove(int x, int y)
{
	//�жϲ����Ϸ���
	//1.x��y�Ϸ���
	if (!(x >= 1 && x <= 19 && y >= 0 && y <= 19))
	{
		cout << "���겻�Ϸ�,����������" << endl;
		system("pause");
		return false;
	}

	//2.�ж�[x][y]�Ϸ���
	if (map[x - 1][y - 1]) 
	{
		cout << "�����괦��������,����������" << endl;
		system("pause");
		return false;
	}
	
	//�����긳ֵ
	map[x - 1][y - 1] = (flag+2)%2 + 1;

	//������Ļ�����´�ӡ����
	system("cls");
	gameView_ShowMap();
	return true;
}



//��Ϸ����
void gameView()
{
	gameView_ShowMap();

	while (flag<19*19)
	{
		//��ʼ������
		int x = 0;
		int y = 0;
		bool ret = false;
		//ż����ڷ�����
		if ((flag+2) % 2 == 0)
		{
			do {
				cout << "�����ֵ��ڷ����ӣ���������������:" << endl;
				cin >> x;

				cin >> y;
				ret = playerMove(x, y);
			} while (!ret);
			if (flag >= 8 && isWin(x, y))
				break;
		}
		else
		{
			do {
				cout << "�����ֵ��׷����ӣ���������������:" << endl;
				cin >> x;
				cin >> y;
				ret = playerMove(x, y);
			} while (!ret);
			if (flag >= 8 && isWin(x, y))
				break;
		}
		//����++
		++flag;
	}
	
	//���������Ƿֳ������	һ��ʤ��/ƽ�� ������Ҫ�����˵�
	winView();
}

void gameSet()
{
	cout<<"�����ڴ�"<<endl;
	cout << endl;
	system("pause");
	system("cls");
}

//�˵���ӡ
void printMenu()
{
	cout << "*******************************" << endl;
	cout << "********     ������    ********" << endl;
	cout << "********  1. ������Ϸ  ********" << endl;
	cout << "********  2. ��������  ********" << endl;
	cout << "********  0. �˳���Ϸ  ********" << endl;
	cout << "*******************************" << endl;
}

void menuView()
{
	printMenu();
	int opt = 0;
	do 
	{
		cout << "������ѡ��" << endl;
		cin >> opt;
		system("cls");
		switch (opt)
		{
		case 1:
			init();
			gameView();
			break;
		case 2:
			gameSet();
			break;
		case 0:
			cout << "��Ϸ���˳�" << endl;
			exit(0);
			break;
		}
		printMenu();
	} while (opt);
}



int main()
{
	menuView();

}