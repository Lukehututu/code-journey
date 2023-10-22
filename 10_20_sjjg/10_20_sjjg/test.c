#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


#define MaxSize 10
//����һ��ջ
typedef struct
{
	int arr[MaxSize];
	int top;//ջ��ָ������ָ�����
}SqStack;

//��ʼ��һ��˳��ջ//���ֱ�ʾ���� top�Ķ���
void InitStack(SqStack* s)
{
	s->top = -1;//���ַ�ʽtopָ��������ʹ�õ�top��λ��
	//s->top = 0;//���ַ�ʽtopָ������һ������ʹ�õ�top��λ��


}


//�п�
_Bool empty(SqStack* l)
{
	if (l->top == -1) //ֻ���ж�ջ��ָ�뼴��
		return 1;
	return 0;

}
//��Ԫ����ջ Push//����

void Push(SqStack* s, int x)
{
	if (s->top + 1 == MaxSize)
		return;
	s->arr[++s->top] = x;
	//s.top++;
	//s.arr[s.top]=x
	return;
}

//��ջPop//ɾ��
void Pop(SqStack* l, int* ret)
{
	if (l->top == -1)//�ж��Ƿ�Ϊ�ձ�
		return;
	*ret=l->arr[l->top--];
	//l->arr[l->top] = *ret;
	//l->top--;
	return;


}
//��ȡջ��Ԫ�� GetTop
void GetTop(SqStack* s,int* ret)
{
	if (s->top == -1)
		return;
	*ret = s->arr[s->top] ;
}

//����ջ
//���干��ջ
typedef struct
{
	int arr[MaxSize];
	int top0;
	int top1;
}sharestack;

//top0 + 1 == top1;




//����ʽ�洢�ķ�ʽ�洢ջ//�涨����ֻ����ͷ�巨��ɾ��Ҳֻ���ڱ�ͷλ��ɾ��

typedef struct Lnode
{
	int data;
	struct Lnode* next;

}Lnode , *Linklist;


//��ͷ���
void Initlist(Linklist l)
{
	//��ͷ��㿪�ٿռ�
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (pc == NULL)
		return;
	l = pc;
	l->next = NULL;
}

//����ͷ���
void Initnohead(Linklist l)
{
	l->next = NULL;
}

//��ջ
void Insertnode(Linklist l, int x)
{
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (pc == NULL)
		return;
	pc->next = l->next;
	l->next = pc;
	pc->data = x;
}

//��ջ
void DeleteNode(Linklist l,int* ret)
{
	//�жϱ����Ƿ���Ԫ��
	if (l->next == NULL)
		return;
	*ret = l->data;
	l->next = l->next->next;
	free(l->next);
}

//����Ԫ��
void GetNode(Linklist l,int* x)
{
	//�п�
	if (l->next == NULL)
		return;
	x = l->next->data;

}

//����
_Bool Full(Linklist l)
{
	int cnt = 0;//��������
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



//���� ˳���
typedef struct
{
	int data[MaxSize];
	int front, rear;
}SqQueue;

//���г�ʼ��
void InitSqQueue(SqQueue q)
{
	q.front = 0;//frontָ����Ƕ�ͷԪ��
	q.rear = 0;//rearָ�������һ�������Ԫ�ص�λ�� ����βԪ�صĺ�һ��λ�ӣ�
}

//�п� ���һ��rearָ�������һ�������Ԫ�ص�λ�ӣ���ͬʱ���һ��Ԫ�ز����ҵ�����ݣ�����Ϊ�ջ���ֻ��Ÿ������ݡ�
void EmptyQueue(SqQueue q)
{
	if (q.front == q.rear) //ֻ����������±��Ϊ�ձ�
		return 1;
	else
		return 0;
}

//����
void fullqueue(SqQueue q)
{
	if ((q.rear + 1) % MaxSize == q.rear)
		return 1;
	else
		return 0;
}


//��//ֻ����β������  �ڶ�����Ӧ����//���
void Insertnode(SqQueue q,int x)
{
	//�ж��Ƿ�����
	fullqueue(q);
	//���û�������в���
	q.data[q.rear] = x;
	q.rear = (q.rear + 1) % MaxSize;
}



//ɾ//����
void DeleteNode(SqQueue q, int* ret)
{
//�п� 
	EmptyQueue(q);
	//ɾ��
	*ret = q.data[q.front];
	q.front = (q.front + 1) % MaxSize;
}


//��
void GetNode(SqQueue q, int* ret)
{
//�п�
	EmptyQueue(q);
	*ret = q.data[q.front]; //ͨ��ֻ��ö�ͷԪ�ص�ֵ
}

int Count(SqQueue q)
{
	return (q.rear + MaxSize - q.front) % MaxSize;
}

//����size�������п�����
typedef struct
{
	int data[MaxSize];
	int front, rear;
	int size;//ÿ����Ӿ�size++,ÿ�γ��Ӿ�size--
	int size;//ÿ����Ӿ�size++,ÿ�γ��Ӿ�size--
};



//�������ʽʵ��
//����������+ָ��
typedef struct Linknode
{
	Linknode* next;
	int data;
}Linknode;

typedef struct
{
	Linknode* front, * rear;
}LinkQueue;


//��ʼ��(��ͷ���)(front����ָ���ͷԪ�أ�rearָ��ǰ�ı�β���)
void Initlist(LinkQueue q)
{
	Linknode* pc = (Linklist*)malloc(sizeof(Linklist));
	if (pc == NULL)
		return ;
	q.front = pc;
	q.rear = pc;
	pc->next = NULL;
}

//�пգ�ֻ�迴��ͷ�ʹ���ָ���Ƿ�ָ��ͬһ��λ�Ӽ��ɣ�
void empty(LinkQueue l)
{
	if (l.front == l.rear)
		return 1;
	else
		return 0;
}


//����ͷ���

void Initnoheadnode(LinkQueue q)
{
	q.front = NULL;
	q.rear = NULL;

}

//�п�(ֻ��ͷ����Ƿ�Ϊ�ռ���)
void pk(LinkQueue q)
{
	if (q.front == NULL)
		return 1;
	else
		return 0;
}

//���(��β����)
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

//���ӣ���ͷ��㣩��ͷɾ��
void DeleteNode(LinkQueue q,int* x)
{
	//�ж��Ƿ�Ϊ�ձ�
	if (q.front == q.rear)
		return;
	Linknode* tmp = q.front->next;
	*x = tmp->data;
	q.front->next = tmp->next;
	if (q.rear == tmp)//�ж��Ƿ�ɾ�����Ǳ�βԪ��
		q.rear = q.front;
	free(tmp);
}

//���� ����ͷ���
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

//����

//����ʵ������ƥ����㷨ʵ��