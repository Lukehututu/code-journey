#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h >
#include<string.h>




//char* addBinary(char* a, char* b)
//{
//    int len_a = strlen(a);
//    int len_b = strlen(b);
//    int dis = len_a - len_b;
//    char sum[20] = {0};
//    if (len_a >= len_b)
//    {
//            int i = 0;
//            for (i = len_a; i >0; i--)
//            {
//                if (i >= dis+1)
//                {
//                    if (sum[i] == '1')
//                        sum[i] -= 48;
//                    sum[i] += (a[i - 1] + b[i-dis-1] - 96);
//    
//                    if (sum[i] >1)
//                    {
//                        sum[i - 1]++;
//                        sum[i] %= 2;
//                        sum[i - 1] += 48;
//                    }
//                    sum[i] += 48;
//                    continue;
//                }
//                sum[i] += a[i-1]-48;
//                if (sum[i] > 1)
//                {
//                    sum[i - 1]++;
//                    sum[i] %= 2;
//                    sum[i - 1] += 48;
//                }
//                sum[i] += 48;
//            }
//     }
//      
//        return sum;
//}

//char* addBinary(char* a, char* b)
//{
//    int a_right = strlen(a)-1;
//    int b_right = strlen(b)-1;
//    
//    if (a_right >= b_right)
//    {
//        char* d = (char*)calloc((a_right+1) * sizeof(char));
//        int a1 = a_right;
//        //全加到a中
//        while (a_right >= 0)
//        {
//            if (b_right >= 0)
//                d[a_right] = a[a_right] + b[b_right] - '0';
//            else
//                d[a_right] = a[a_right];
//            b_right--;
//            a_right--;
//        }
//        a_right = a1;
//        while (a_right > 0)
//        {
//            if (d[a_right] == '2' || d[a_right] == '3')
//            {
//                d[a_right] = (d[a_right] == '2' ? '0' : '1');
//                d[a_right - 1]++;
//            }
//            a_right--;
//        }
//        a_right = a1;
//        if (d[0] == '2' || d[0] == '3')
//        {
//            char* c = (char*)calloc(a_right + 3 , sizeof(char));
//            c[0] = '1';
//            c[1] = (d[0] == '2' ? '0' : '1');
//            for (int i = 2; i < a_right+2; i++)
//            {
//                c[i] = d[i - 1];
//            }
//            c[a_right + 2] = '\0';
//            return c;
//        }
//        return d;
//    }
//
//  
//}
//
//int main()
//{
//    char* a=  "1011";
//    char* b = "1010";
//    printf("%s\n", addBinary(a, b));
//
//    return 0;
//}


//双链表创建
typedef struct Dnode
{
	int data;
	struct Dnode* prior;//多了一个指针域表示前驱
	struct Dnode* next;
}Dnode, *DLinklist;
//考虑跟最后一个结点的关系

//双链表的初始化
void InitList(DLinklist l)
{
	//创建头结点
	Dnode* pc = (Dnode*)malloc(sizeof(Dnode));
	pc->next = NULL;
	pc->prior = NULL;
	pc->data = 0;
}

//双链表的插入在p结点之后插入s结点(后插法)
void Insertnextnode(Dnode* p,Dnode* s)
{
	if (p != NULL || s != NULL)//判断参数合法性
		return;
	s->next = p->next;
	if(p->next!=NULL)
	     p->next->prior = s; //考虑当p结点是最后一个结点的时候即当p.next=NULL时，这句话会报错因此要进行怕判断
	s->prior = p;
	p->next = s;
	return;
}
//前插法实际上可以转换成后插法，因为有了prior

void Insertpriornode(Dnode* p, Dnode* s)
{
	if (p != NULL || s != NULL)//判断参数合法性
		return;
	s->prior = p->prior;
	s->next = p;
	if(p->prior=NULL)
	    p->prior->next = s;//也要进行判空
	p->prior = s;
}


//双链表的删除//删除指定结点p的后继结点q
void Deletenode(Dnode* p)
{
	if (p == NULL)
		return;
	Dnode* q = p->next;
	if (q == NULL)
		return;
	p->next = q->next;
	if(q->next!=NULL)
	      q->next->prior = p;//当q.next为空指针时会报错因此要判断
	free(q);
}

//双链表的销毁
void DestoryList(DLinklist l)
{
	
	while (l->next!=NULL)
	{
		Deletenode(l);
	}
	free(l);
	l = NULL;
}
//双链表的遍历
//向后遍历
void OprateNextNode(DLinklist l)
{
	Dnode* pc = l;
	while (pc!= NULL)
	{
		//业务操作
		pc = pc->next;
	}


}


//循环单链表创建
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,* Linklist;

//循环单链表初始化
void InitList(Linklist l)
{
	Lnode* p = (Lnode*)malloc(sizeof(Lnode));
	if (!p)
		return;
	l = p;
	l->next = l;
}

//判断单链表是否为空
_Bool Emptylist(Linklist l)
{
	int ture = 1;
	int false = 0;
	if (l->next == l)
		return ture;
	return false;

}

//判断是一个结点否为表尾
_Bool TailList(Linklist l, Lnode* p)
{
	if (!p)
		return;
	if (p->next == l)
		return 1;
	return 0;
}


//初始化循环双链表
void InitDnode(DLinklist l)
{
	Dnode* p = (Dnode*)malloc(sizeof(Dnode));
	if (!p)
		return;
	l = p;
	l->next = l;//最后一个结点的next指向头结点
	l->prior = l; //头结点的prior指向最后一个结点
}


//双链表的插入 在p后插入q结点
void InsertDnode(Dnode* p)
{
	if (p == NULL)
		return;
	Dnode* q = p->next;
	q->next = p->next;
	p->next->prior = q; //此时因为p.next永远不可能为空，即使他是最后一个结点，那p.next也指向l，因此这里不用判断
	q->prior = p;
	p->next = q;
	return;
}

//定义一个静态链表 
//两种定义方式

#define MAX_SIZE 10
typedef struct Node
{
	int data;
	int next;
}SLinklist[MAX_SIZE];

struct Node
{
	int data;
	int next;

};

int main()
{
	SLinklist l;

	struct Node a[MAX_SIZE];

	return 0;
}
//一个强调数组 一个强调静态链表

//静态链表初始化

void InitSlist(SLinklist l)
{
	l->next = EOF;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		l[i].next = -2; //将每一个结点的游标都设为-2，方便后面查找还空着的结点
	}
	
}

//插入一个新的结点
void Insertnode(SLinklist l, int x)
{
	int i = 0;
	for ( i = 0; MAX_SIZE; i++)
	{
		if (l[i].next == -2)
			break;
	}
	int a = i;
	for (i = 0; i < MAX_SIZE; i++)
	{
		if (l[i].next == EOF)
			break;
	}
	l[i].next = a;
	l[a].data = x;
	l[a].next = EOF;
	return;
}