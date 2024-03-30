#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<iomanip>

//枚举棋牌每个位置的状态
enum state
{
	empty,
	black,
	white
};

//建立棋盘结构
int map[19][19];

// 表示当前回合数  偶数表示黑棋落子  奇数表示白棋落子
// 如: flag = 20 表示当前是第[20]次落子  由黑方落子
int flag;


// -------------------- service --------------------

//棋盘初始化
void init()
{
	//棋盘初始化
	for (int i = 0; i < 19; ++i)
	{
		for (int j = 0; j < 19; ++j)
		{
			map[i][j] = 0;
		}
	}

	//初始轮数设置为0
	flag = 0;
	//此时是黑棋先落子
}


//根据当前落子进行胜利判断
bool isWin(int x,int y)
{
	int n = map[x][y];

	//1.横着五颗
	int cnt = 1 ;
	for (int j = y - 1; j >= 0 && map[x - 1][j] == n; j--, cnt++);
	for (int j = y ; j <= 18 && map[x - 1][j] == n; j++, cnt++);
	if (cnt == 5)
		return true;

	//2.竖着五颗;
	cnt = 1;
	for (int i = x - 1; i >= 0 && map[i][y - 1] == n; i--, cnt++);
	for (int i = x; i <= 18 && map[i][y - 1] == n; i++, cnt++);
	if (cnt == 5)
		return true;

	//3.斜着五颗--左上到右下
	cnt = 1;
	for (int i = x - 1,j = y - 1; i >= 0 && j >= 0 && map[i][j] == n; i--, j--, cnt++);
	for (int i = x ,j = y; i <= 18 && j <= 18 && map[i][j] == n; i++, j++, cnt++);
	if (cnt == 5)
		return true;

	//4.斜着五颗--左下到右上
	cnt = 1;
	for (int i = x - 1,j = y - 1; i >= 0 && j <= 18 && map[i][j] == n; i--, j++, cnt++);
	for (int i = x ,j = y - 2; i <= 18 && j >= 0 && map[i][j] == n; i++, j--, cnt++);
	if (cnt == 5)
		return true;

	return false;
}

//胜利界面
void winView()
{
	cout <<endl<< "**********************************" << endl;
	if (flag < 19 * 19)
	{
		if (flag % 2 == 0)
			cout << setw(19) << "黑子胜利" << endl;
		else
			cout << setw(19) << "白子胜利" << endl;
	}
	else
		cout << setw(19) << "平局" << endl;
	cout << "**********************************" << endl;

	system("pause");
	system("cls");
}


//打印棋盘
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

//落子
int playerMove(int x, int y)
{
	//判断参数合法性
	//1.x，y合法性
	if (!(x >= 1 && x <= 19 && y >= 0 && y <= 19))
	{
		cout << "坐标不合法,请重新输入" << endl;
		system("pause");
		return false;
	}

	//2.判断[x][y]合法性
	if (map[x - 1][y - 1]) 
	{
		cout << "该坐标处已有棋子,请重新输入" << endl;
		system("pause");
		return false;
	}
	
	//给坐标赋值
	map[x - 1][y - 1] = (flag+2)%2 + 1;

	//清理屏幕并重新打印棋盘
	system("cls");
	gameView_ShowMap();
	return true;
}



//游戏界面
void gameView()
{
	gameView_ShowMap();

	while (flag<19*19)
	{
		//初始化坐标
		int x = 0;
		int y = 0;
		bool ret = false;
		//偶数则黑方落子
		if ((flag+2) % 2 == 0)
		{
			do {
				cout << "现在轮到黑方落子，请输入棋子坐标:" << endl;
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
				cout << "现在轮到白方落子，请输入棋子坐标:" << endl;
				cin >> x;
				cin >> y;
				ret = playerMove(x, y);
			} while (!ret);
			if (flag >= 8 && isWin(x, y))
				break;
		}
		//轮数++
		++flag;
	}
	
	//跳出来就是分出结果了	一方胜利/平局 或者是要跳出菜单
	winView();
}

void gameSet()
{
	cout<<"敬请期待"<<endl;
	cout << endl;
	system("pause");
	system("cls");
}

//菜单打印
void printMenu()
{
	cout << "*******************************" << endl;
	cout << "********     五子棋    ********" << endl;
	cout << "********  1. 进入游戏  ********" << endl;
	cout << "********  2. 进入设置  ********" << endl;
	cout << "********  0. 退出游戏  ********" << endl;
	cout << "*******************************" << endl;
}

void menuView()
{
	printMenu();
	int opt = 0;
	do 
	{
		cout << "请输入选项" << endl;
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
			cout << "游戏已退出" << endl;
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