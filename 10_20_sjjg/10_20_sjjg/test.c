#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


#define MaxSize 10
//定义一个栈
typedef struct
{
	int arr[MaxSize];
	int top;//栈顶指针用来指向最顶层
}SqStack;

//初始化一个顺序栈//两种表示方法 top的定义
void InitStack(SqStack* s)
{
	s->top = -1;//这种方式top指的是正在使用的top的位置
	//s->top = 0;//这种方式top指的是下一个即将使用的top的位置


}


//判空
_Bool empty(SqStack* l)
{
	if (l->top == -1) //只需判断栈顶指针即可
		return 1;
	return 0;

}
//新元素入栈 Push//增加

void Push(SqStack* s, int x)
{
	if (s->top + 1 == MaxSize)
		return;
	s->arr[++s->top] = x;
	//s.top++;
	//s.arr[s.top]=x
	return;
}

//出栈Pop//删除
void Pop(SqStack* l, int* ret)
{
	if (l->top == -1)//判断是否为空表
		return;
	*ret=l->arr[l->top--];
	//l->arr[l->top] = *ret;
	//l->top--;
	return;


}
//读取栈顶元素 GetTop
void GetTop(SqStack* s,int* ret)
{
	if (s->top == -1)
		return;
	*ret = s->arr[s->top] ;
}

//共享栈
//定义共享栈
typedef struct
{
	int arr[MaxSize];
	int top0;
	int top1;
}sharestack;

//top0 + 1 == top1;




//用链式存储的方式存储栈//规定插入只能用头插法，删除也只能在表头位置删除

typedef struct Lnode
{
	int data;
	struct Lnode* next;

}Lnode , *Linklist;


//带头结点
void Initlist(Linklist l)
{
	//给头结点开辟空间
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (pc == NULL)
		return;
	l = pc;
	l->next = NULL;
}

//不带头结点
void Initnohead(Linklist l)
{
	l->next = NULL;
}

//进栈
void Insertnode(Linklist l, int x)
{
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (pc == NULL)
		return;
	pc->next = l->next;
	l->next = pc;
	pc->data = x;
}

//出栈
void DeleteNode(Linklist l,int* ret)
{
	//判断表中是否还有元素
	if (l->next == NULL)
		return;
	*ret = l->data;
	l->next = l->next->next;
	free(l->next);
}

//查找元素
void GetNode(Linklist l,int* x)
{
	//判空
	if (l->next == NULL)
		return;
	x = l->next->data;

}

//判满
_Bool Full(Linklist l)
{
	int cnt = 0;//计数器法
	Lnode* tmp = l;
	while (tmp->next)
	{
		tmp = tmp->next;
		cnt++;
	}
	if (cnt == MaxSize)
		return 1;
	return 0;
}



//队列 顺序表
typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;

//队列初始化
void InitSqQueue(SqQueue q)
{
	q.front = 0;//front指向的是队头元素
	q.rear = 0;//rear指向的是下一个插入的元素的位子 （队尾元素的后一个位子）
}

//判空 情况一：rear指向的是下一个插入的元素的位子，且同时最后一个元素不存放业务数据，数据为空或是只存放辅助数据。
void EmptyQueue(SqQueue q)
{
	if (q.front == q.rear) //只有这种情况下表才为空表
		return 1;
	else
		return 0;
}

//判满
void fullqueue(SqQueue q)
{
	if ((q.rear + 1) % MaxSize == q.rear)
		return 1;
	else
		return 0;
}


//增//只能在尾部插入  在队列中应当叫//入队
void Insertnode(SqQueue q,int x)
{
	//判断是否满了
	fullqueue(q);
	//如果没满，进行插入
	q.data[q.rear] = x;
	q.rear = (q.rear + 1) % MaxSize;
}



//删//出队
void DeleteNode(SqQueue q, int* ret)
{
//判空 
	EmptyQueue(q);
	//删除
	*ret = q.data[q.front];
	q.front = (q.front + 1) % MaxSize;
}


//查
void GetNode(SqQueue q, int* ret)
{
//判空
	EmptyQueue(q);
	*ret = q.data[q.front]; //通常只获得对头元素的值
}

int Count(SqQueue q)
{
	return (q.rear + MaxSize - q.front) % MaxSize;
}

//增加size变量来判空判满
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int size;//每次入队就size++,每次出队就size--
	int size;//每次入队就size++,每次出队就size--
};



//队伍的链式实现
//定义链表结点+指针
typedef struct Linknode
{
	Linknode* next;
	int data;
}Linknode;

typedef struct
{
	Linknode* front, * rear;
}LinkQueue;


//初始化(带头结点)(front还是指向队头元素，rear指向当前的表尾结点)
void Initlist(LinkQueue q)
{
	Linknode* pc = (Linklist*)malloc(sizeof(Linklist));
	if (pc == NULL)
		return ;
	q.front = pc;
	q.rear = pc;
	pc->next = NULL;
}

//判空（只需看表头和待插指针是否指向同一个位子即可）
void empty(LinkQueue l)
{
	if (l.front == l.rear)
		return 1;
	else
		return 0;
}


//不带头结点

void Initnoheadnode(LinkQueue q)
{
	q.front = NULL;
	q.rear = NULL;

}

//判空(只许看头结点是否为空即可)
void pk(LinkQueue q)
{
	if (q.front == NULL)
		return 1;
	else
		return 0;
}

//入队(队尾插入)
void Insertnode(LinkQueue q, int x)
{
	Linknode* pc = (Linklist*)malloc(sizeof(Linklist));
	if (pc == NULL)
		return;
	pc->data = x;
	pc->next = NULL;
	q.rear->next = pc;
	q.rear = pc;
}

//出队（带头结点）表头删除
void DeleteNode(LinkQueue q,int* x)
{
	//判断是否为空表
	if (q.front == q.rear)
		return;
	Linknode* tmp = q.front->next;
	*x = tmp->data;
	q.front->next = tmp->next;
	if (q.rear == tmp)//判断是否删除的是表尾元素
		q.rear = q.front;
	free(tmp);
}

//出队 不带头结点
void DeleteN(LinkQueue q, int* x)
{
	if (q.front == NULL)
		return;
	*x = q.front->data;
	q.front = q.front->next;
	if (q.rear = q.front)
	{
		q.front = NULL;
		q.rear = NULL;
	}
	free(q.front);
}

//判满

//尝试实现括号匹配的算法实现