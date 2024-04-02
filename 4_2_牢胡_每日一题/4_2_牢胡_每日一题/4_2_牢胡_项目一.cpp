using namespace std;
#include<iostream>
//
//1. 根据以下要求, 实现一套登录功能
//已知有全局变量
int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = { "张三", "李四", "王五", "赵六" };
char passwords[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum = 4;



//其中 每个下标对应一套用户数据(id, 名称, 密码)
//如下标[1]: 对应10002, 李四, bbbbb
//根据以下的函数声明和注释, 写出相应的函数实现
/*
功能: 根据id 查询用户是否存在, 如果存在返回用户名, 如果不存在返回空
参数:
uid: 用户id
返回值:
如果用户存在, 返回用户名.
如果用户不存在, 返回NULL
*/


char* selectUserById(int uid) {
	int cnt = 0;
	while (uid != ids[cnt]) {
		++cnt;
	}
	if (cnt == 5)
		return nullptr;
	else
		return &names[cnt][0];
}


/*
功能: 根据id 查询用户密码, 如果存在返回用户密码, 如果不存在返回空
参数:
uid: 用户id
返回值:
如果密码存在, 返回密码.
如果密码不存在, 返回NULL
*/
char* selectPassById(int uid) {
	int cnt = 0;
	while (uid != ids[cnt]){
		++cnt;
	}
	if (cnt == 5)
		return nullptr;
	else
		return &passwords[cnt][0];
}



//----------------------------------------------------
/*
功能: 传入用户id和密码, 根据上面两个函数(selectUserById, selectPassById)来获取相应用
户数据, 并判断是否登录成功
传入用户id 查询用户名是否存在, 并获取用户密码
如果用户存在 则判断密码是否正确
参数:
uid: 用户账户
password: 用户密码
返回值:
如果账号不存在, 返回1
如果密码错误, 返回2
如果登录成功, 返回0
*/
int login(int uid, char* password) {
	char* correct_password = selectPassById(uid);
	bool isexists = selectUserById(uid) == nullptr ? false : true;
	if (!isexists)
		return 1;
	if (strcmp(correct_password,password))
		return 2;
	else
		return 0;
}


//---------------------------------------------------- -
/*
功能: 提示用户输入账号密码, 根据login函数判断是否登录成功,
如果登录成功提示正在进入首页
如果登录失败
密码错误: 提示密码错误, 并让用户重新登录
账号不存在: 提示账号不存在, 并提示正在进入注册界面
参数: 无
返回值: 无
*/
void showLoginPage() {
	int uid = 0;
	char password[16];
	do {
		cout << "请输入账号：" << endl;
		cin >> uid;
		cout << "请输入密码：" << endl;
		cin >> password;
		if (login(uid, password) == 2)
			cout << "密码错误请重新输入" << endl;
	} while (login(uid, password) == 2);

	if (login(uid, password) == 1) {
		cout << "账号不存在，正在进入注册界面" << endl;
		//跳转到注册页面
	}
	else {
		cout << "正在进入首页" << endl;
		//跳转到首页
	}

}


//样例输入:
//10001
//aaaaa
//样例输出 :
//登录成功, 正在进入首页
//样例输入 :
//10001
//aaaab
//样例输出 :
//密码错误, 请重新登录
//提示 : 先输入数字再输入回车, 可能会出现回车符号被% s或者gets接收的情况, 导致密码无法被接收,
//可以用getchar接收回车来解决.
//对应知识点 : 键盘缓冲区
//2. 上面有用虚线将函数划分为3种, 这三种函数有哪些区别(可以百度查询"三层架构").根据这种思路
//实现一套注册功能.

int main(){
	showLoginPage();

}