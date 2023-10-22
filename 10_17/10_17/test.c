#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//char* addBinary(char* a, char* b)
//{
//    int len_a = strlen(a);
//    int len_b = strlen(b);
//    int dis = len_a - len_b;
//    char sum[20] = {0};
//    if (len_a >= len_b)
//    {
//        int i = 0;
//        for (i = len_a; i >0; i--)
//        {
//            if (i >= dis+1)
//            {
//                if (sum[i] == '1')
//                    sum[i] -= 48;
//                sum[i] += (a[i - 1] + b[i-dis-1] - 96);
//
//                if (sum[i] >1)
//                {
//                    sum[i - 1]++;
//                    sum[i] %= 2;
//                    sum[i - 1] += 48;
//                }
//                sum[i] += 48;
//                continue;
//            }
//            sum[i] += a[i-1]-48;
//            if (sum[i] > 1)
//            {
//                sum[i - 1]++;
//                sum[i] %= 2;
//                sum[i - 1] += 48;
//            }
//            sum[i] += 48;
//        }
//    }
//  
//    return sum;
//}
//
//
//int main()
//{
//    char* a = "1111";
//    char* b = "101";
//    printf("%s\n", addBinary(a, b));
//    return 0;
//}




//typedef struct CON
//{
//	int* data;
//	int length;
//	int max_size;
//}C;
//
//void Initlist(C* pc)
//{
//	pc->data = (int*)calloc(10, sizeof(int));
//	pc->length = 0;
//	pc->max_size = 8;
//}
//
//void Increaselist(C* pc)
//{
//	int* pt = (int*)realloc(pc, (10 + 5) * sizeof(int));
//	if (!pt)
//	{
//		perror("Increaselist");
//		return;
//	}
//	pc->data = pt;
//	pc->max_size += 5;
//	return 0;
//}
//
//int main()
//{
//	C c;
//	Initlist(&c);
//	Increaselist(&c);
//
//
//
//
//	return 0;
//}

//单链表
//区分两种Linklist* 和Lnode
//声明单链表
//初始化单链表。（不带头结点和带头结点）大多数情况下应当带头结点。（空表判断）


typedef struct Lnode //一个结点
{
	int data;//数据域
	struct Lnode* next;//指针域

}Lnode,* Linklist;//强调是一个结点用Lnode，强调是单链表用Linklist


//不带头结点
//void Initlist(Linklist* l)  
//{
//	l = NULL;//判空
//
//
//}
//
//带头结点
//void Initlist(Linklist  l)
//{
//	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
//	if (!pc)
//	{
//		perror("Initlist");
//		return;
//	}
//	l = pc;
//	l->next == NULL;//判空
//}
//
//int main()
//{
//	Linklist l;//声明一个指向单链表的指针
//	Initlist(l);
//
//
//	return 0;
//}





//按位序插入
typedef struct Lnode
{
	int a;
	struct Lnode* next;
}Lnode,*Linklist;

void Initlist(Linklist l)
{
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	l = pc;
	l->next = NULL;
}
//后插法
//给定位序后插(带头结点)
void Insertbacknode(Linklist l, int i, int data)//在链表l上的位序为i的结点存放数据为data
{
	if (i < 1)//先判断参数是否合法
		return;
	//为新结点申请空间
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));//此处有问题，应当先去找再申请，因为如果找不到就不用申请了，如果放在前面那就无论如何都会申请，不合适。
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	//找到第i-1个结点，从头结点开始依次往后
	Linklist tmp = l;
	int j = 0;//j来表示指到了第几个结点了//此时头结点可以视为第0个结点
	for (j = 0; !tmp && j < i-1; j++)
	{
		tmp = tmp->next;
	}	
	//异常判断
	if (!tmp)//最多只能插入到表尾n+1，此时就tmp指向最后一个结点n，但如果要插入到n+2（实际上插入不了），就得指向n+1但最后一个n的next为空因此用这个来判断插入的合法性。
	{
		perror("非法操作");
		return;
	}

	//插入
	pc->next = tmp->next;
	pc->a = data;
	tmp->next = pc;
}
//后插（不带头结点）
void Insertbacknode(Linklist l, int i, int data)
{
//因为头指针直接指向第一个结点，因此如果是要插在第一位，则逻辑跟插在后面的不相同
	if (i == 1)
	{
		//先申请空间
		Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
		if (!pc)
		{
			perror("Initlist");
			return;
		}
		//插入
		pc->next = l;
		pc->a = data;
		l = pc;
		return;
	}
	//当i大于1时逻辑就跟普通的后插一样了，都是先找到i-1然后再插入。
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));//同样的，都应该先查找再申请
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	Lnode* tmp = l;
	int j = 1;//此时就是从1开始往后找而不是0；
	for (j = 1;!tmp && j < i; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		perror("非法操作");
		return;
	}
	//插入
	pc->next = tmp->next;
	pc->a = data;
	tmp->next = pc;
}



//前插法
//法一：给了l，此时就从同开始一直找到i-1然后插入
//法二：没给l，只给了第p个结点的指针
void Insertfrontnode(Lnode* p, int data)//在p结点前面插入一个结点，数据为data
{
	//判断参数合法性
	if (!p)
	{
		perror("Insert……");
		return;
	}

	//给新结点分配内存
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	//先后插
	pc->next = p->next;
	p->next = pc;
	pc->a = p->a;//指针不用交换，直接交换p和p+1（pc）里的data即可
	p->a = data;
}


//int main()
//{
//	Linklist l;
//	Initlist(l);
//	int i = 5;//位序
//	int data = 10;
//	Insertnode(l, i, data);
//
//	return 0;
//}


//按位序结点删除
//有头结点情况
void Deletenode(Lnode* l, int i, int* ret)//删除p链表的i位序的元素，并返回删除的元素的内容a（因为要返回所以用的时int*）
{
	//参数合法性检查
	if (i < 1)
	{
		perror("Del……");
		return;
	}
	//找i-1
	int j = 0;
	Lnode* tmp = l;
	while (tmp!=NULL && j < i - 1)
	{
		tmp = tmp->next;
		j++;
	}
	if (!tmp)
	{
		perror("非法操作");
		return;
	}
	if (tmp->next == NULL)
		return;

	//删除结点 将删除的结点的data传回来，然后把i结点的next赋给i-1结点，然后把i结点free了。
	Lnode* q = tmp->next;//q指向第i个节点
	*ret = q->a;
	tmp->next = q->next;//把q的后继赋给p
	free(q);//把第i个结点释放。
}




//指定结点的删除


//查找结点
//按位查找(带头结点)
Lnode* GetElem(Lnode* l, int i)
{
	if (i < 0)
		return NULL;
	int j = 1;
	Lnode* p = l;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;

}


//按值查找
Lnode* Searchvaluenode(Lnode* l, int value)
{
	Lnode* p = l;
	while (p != NULL && p->a != value)
		p = p->next;
	return p;
}

//求表长
int Lengthlist(Lnode* l)
{
	int length = 0;
	Lnode* p = l;
	while (p ->next!= NULL)
	{
		p = p->next;
		length++;
	}
	return length;
}



//链表的创建
//头插法
Linklist List_HeadInsert(Lnode* l)
{
	//初始化一个链表
	Linklist* pc = (Linklist*)malloc(sizeof(Lnode));//创建头结点
	if (!pc)
		return;//判空
	l = pc;
	l->next = NULL;//初始化l.next

	//头插法
	int x;
	Lnode*p;//其中p用于插入结点
	scanf("%d", &x);
	while (x != 9999)//其中9999是用来结束链表建立的随便一个特殊的数就行
	{
		//开始插入
		Lnode* p = (Lnode*)malloc(sizeof(Lnode));
		p->a = x;
		p->next = l->next;
		l->next = p;
		scanf("%d", &x);
	}

	return l;

}


// 尾插法
Linklist Insert_Taillist(Lnode* l)
{
	//初始化一个链表
	Linklist* pc = (Linklist*)malloc(sizeof(Lnode));//创建头结点
	if (!pc)
		return;//判空
	l = pc;
	l->next = NULL;//初始化l.next

	//尾插数据
	int x;
	Lnode* n, * p;
	n = l;
	scanf("%d", &x);
	while (x != 9999)
	{
		p = (Lnode*)malloc(sizeof(Lnode));
		p->a = x;
		n->next = p;
		n = p;
		scanf("%d", &x);
	}
	n->next = NULL;
	return l;


}
//链表的逆置




int main()
{
	Linklist l;
	Initlist(l);
	int i = 5;//位序
	int data = 10;
	Insertnode(l, i, data);

	return 0;
}
