#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//test.c测试通讯录的模块

//通讯录---静态版本
//1.能够存放1000人的信息
//2.每个人的信息包含
//   名字
//   年龄
//   电话
//   地址
//3.能够增加人的信息
//4.删除指定人的信息
//5.修改指定人的信息
//6.查找指定人的信息
//7.排序通讯录的信息

//版本2
//动态增长的版本
//1>通讯录初始化以后，能存三个人的信息
//2>当空间存放满的时候我们增加2个


//版本3
//当通讯录退出的时候，把信息写进文件
//当加载程序的时候，读取数据




enum Option
{
	EXIT,
	ADD,
	SUB,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};


int main()
{
	//读取文件函数
	ReadContact(&con);
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case SUB:
			SUBContact(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			Modify(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case PRINT:
			PrintCon(&con);
			break;
		case EXIT:
			//先要保存信息进文件
			SaveContact(&con);
			ExitContact(&con);
			break;
		default:
			printf("非法输入\n");
			break;
		}
	} while (input);

	return 0;
}
