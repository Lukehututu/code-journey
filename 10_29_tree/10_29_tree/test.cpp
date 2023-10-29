#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//树的顺序存储
//先定义结点
typedef struct treenode
{
	int data;//数据域
	int parent;//指针域——指向的父节点的位置
}treenode;

//再定义数组
#define MaxSize 100
typedef struct tree
{
	treenode nodes[MaxSize];
	int n;//用n来表示已经存了多少元素
}tree;

//增删操作
//增加直接在空白的位置增加数据即可（记录数据以及父节点的位置）
 
void Insertnode(tree T, int a)
{
	int i = 0;
	while (T.nodes[i].parent != -2)//初始化一个特殊值来表明结点为空
	{
		i++;
	}
	T.nodes[i].data = a;
}

//删除操作 ：
//1.只将结点删除，位置就空出来
//2.删除结点的同时，将尾部的结点补到该节点的位置

//当删除的结点不是叶子节点时，需要删除它本身以及他的孩子




//孩子表示法
//表示孩子
typedef struct CTnode
{
	int a;//存储这个孩子在数组中的位置
	CTnode* next;//指向下一个孩子（他的兄弟结点）
}CTnode;

//定义根节点
typedef struct
{
	int data;//数据域
	CTnode* firstchild;//指向该节点的第一个孩子（从左往右数）
}CTbox;

//定义数组
typedef struct
{
	CTbox nodes[MaxSize];
	int n, r;//n表示结点的个数，r来表示根节点的位置
}cTree;


//孩子兄弟表示法(纯链式存储)
typedef struct CSnode
{
	CSnode* firstchild, * nextsibling;//指针域 存储他的第一个孩子的指针和这个孩子的右兄弟的指针
	int data;//数据域
}CSnode,*CStree;
