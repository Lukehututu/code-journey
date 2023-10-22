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
//        //ȫ�ӵ�a��
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


//˫������
typedef struct Dnode
{
	int data;
	struct Dnode* prior;//����һ��ָ�����ʾǰ��
	struct Dnode* next;
}Dnode, *DLinklist;
//���Ǹ����һ�����Ĺ�ϵ

//˫����ĳ�ʼ��
void InitList(DLinklist l)
{
	//����ͷ���
	Dnode* pc = (Dnode*)malloc(sizeof(Dnode));
	pc->next = NULL;
	pc->prior = NULL;
	pc->data = 0;
}

//˫����Ĳ�����p���֮�����s���(��巨)
void Insertnextnode(Dnode* p,Dnode* s)
{
	if (p != NULL || s != NULL)//�жϲ����Ϸ���
		return;
	s->next = p->next;
	if(p->next!=NULL)
	     p->next->prior = s; //���ǵ�p��������һ������ʱ�򼴵�p.next=NULLʱ����仰�ᱨ�����Ҫ�������ж�
	s->prior = p;
	p->next = s;
	return;
}
//ǰ�巨ʵ���Ͽ���ת���ɺ�巨����Ϊ����prior

void Insertpriornode(Dnode* p, Dnode* s)
{
	if (p != NULL || s != NULL)//�жϲ����Ϸ���
		return;
	s->prior = p->prior;
	s->next = p;
	if(p->prior=NULL)
	    p->prior->next = s;//ҲҪ�����п�
	p->prior = s;
}


//˫�����ɾ��//ɾ��ָ�����p�ĺ�̽��q
void Deletenode(Dnode* p)
{
	if (p == NULL)
		return;
	Dnode* q = p->next;
	if (q == NULL)
		return;
	p->next = q->next;
	if(q->next!=NULL)
	      q->next->prior = p;//��q.nextΪ��ָ��ʱ�ᱨ�����Ҫ�ж�
	free(q);
}

//˫���������
void DestoryList(DLinklist l)
{
	
	while (l->next!=NULL)
	{
		Deletenode(l);
	}
	free(l);
	l = NULL;
}
//˫����ı���
//������
void OprateNextNode(DLinklist l)
{
	Dnode* pc = l;
	while (pc!= NULL)
	{
		//ҵ�����
		pc = pc->next;
	}


}


//ѭ����������
typedef struct Lnode
{
	int data;
	struct Lnode* next;
}Lnode,* Linklist;

//ѭ���������ʼ��
void InitList(Linklist l)
{
	Lnode* p = (Lnode*)malloc(sizeof(Lnode));
	if (!p)
		return;
	l = p;
	l->next = l;
}

//�жϵ������Ƿ�Ϊ��
_Bool Emptylist(Linklist l)
{
	int ture = 1;
	int false = 0;
	if (l->next == l)
		return ture;
	return false;

}

//�ж���һ������Ϊ��β
_Bool TailList(Linklist l, Lnode* p)
{
	if (!p)
		return;
	if (p->next == l)
		return 1;
	return 0;
}


//��ʼ��ѭ��˫����
void InitDnode(DLinklist l)
{
	Dnode* p = (Dnode*)malloc(sizeof(Dnode));
	if (!p)
		return;
	l = p;
	l->next = l;//���һ������nextָ��ͷ���
	l->prior = l; //ͷ����priorָ�����һ�����
}


//˫����Ĳ��� ��p�����q���
void InsertDnode(Dnode* p)
{
	if (p == NULL)
		return;
	Dnode* q = p->next;
	q->next = p->next;
	p->next->prior = q; //��ʱ��Ϊp.next��Զ������Ϊ�գ���ʹ�������һ����㣬��p.nextҲָ��l��������ﲻ���ж�
	q->prior = p;
	p->next = q;
	return;
}

//����һ����̬���� 
//���ֶ��巽ʽ

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
//һ��ǿ������ һ��ǿ����̬����

//��̬�����ʼ��

void InitSlist(SLinklist l)
{
	l->next = EOF;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		l[i].next = -2; //��ÿһ�������α궼��Ϊ-2�����������һ����ŵĽ��
	}
	
}

//����һ���µĽ��
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