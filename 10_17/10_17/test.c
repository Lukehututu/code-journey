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

//������
//��������Linklist* ��Lnode
//����������
//��ʼ��������������ͷ���ʹ�ͷ��㣩����������Ӧ����ͷ��㡣���ձ��жϣ�


typedef struct Lnode //һ�����
{
	int data;//������
	struct Lnode* next;//ָ����

}Lnode,* Linklist;//ǿ����һ�������Lnode��ǿ���ǵ�������Linklist


//����ͷ���
//void Initlist(Linklist* l)  
//{
//	l = NULL;//�п�
//
//
//}
//
//��ͷ���
//void Initlist(Linklist  l)
//{
//	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
//	if (!pc)
//	{
//		perror("Initlist");
//		return;
//	}
//	l = pc;
//	l->next == NULL;//�п�
//}
//
//int main()
//{
//	Linklist l;//����һ��ָ�������ָ��
//	Initlist(l);
//
//
//	return 0;
//}





//��λ�����
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
//��巨
//����λ����(��ͷ���)
void Insertbacknode(Linklist l, int i, int data)//������l�ϵ�λ��Ϊi�Ľ��������Ϊdata
{
	if (i < 1)//���жϲ����Ƿ�Ϸ�
		return;
	//Ϊ�½������ռ�
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));//�˴������⣬Ӧ����ȥ�������룬��Ϊ����Ҳ����Ͳ��������ˣ��������ǰ���Ǿ�������ζ������룬�����ʡ�
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	//�ҵ���i-1����㣬��ͷ��㿪ʼ��������
	Linklist tmp = l;
	int j = 0;//j����ʾָ���˵ڼ��������//��ʱͷ��������Ϊ��0�����
	for (j = 0; !tmp && j < i-1; j++)
	{
		tmp = tmp->next;
	}	
	//�쳣�ж�
	if (!tmp)//���ֻ�ܲ��뵽��βn+1����ʱ��tmpָ�����һ�����n�������Ҫ���뵽n+2��ʵ���ϲ��벻�ˣ����͵�ָ��n+1�����һ��n��nextΪ�������������жϲ���ĺϷ��ԡ�
	{
		perror("�Ƿ�����");
		return;
	}

	//����
	pc->next = tmp->next;
	pc->a = data;
	tmp->next = pc;
}
//��壨����ͷ��㣩
void Insertbacknode(Linklist l, int i, int data)
{
//��Ϊͷָ��ֱ��ָ���һ����㣬��������Ҫ���ڵ�һλ�����߼������ں���Ĳ���ͬ
	if (i == 1)
	{
		//������ռ�
		Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
		if (!pc)
		{
			perror("Initlist");
			return;
		}
		//����
		pc->next = l;
		pc->a = data;
		l = pc;
		return;
	}
	//��i����1ʱ�߼��͸���ͨ�ĺ��һ���ˣ��������ҵ�i-1Ȼ���ٲ��롣
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));//ͬ���ģ���Ӧ���Ȳ���������
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	Lnode* tmp = l;
	int j = 1;//��ʱ���Ǵ�1��ʼ�����Ҷ�����0��
	for (j = 1;!tmp && j < i; i++)
		tmp = tmp->next;

	if (!tmp)
	{
		perror("�Ƿ�����");
		return;
	}
	//����
	pc->next = tmp->next;
	pc->a = data;
	tmp->next = pc;
}



//ǰ�巨
//��һ������l����ʱ�ʹ�ͬ��ʼһֱ�ҵ�i-1Ȼ�����
//������û��l��ֻ���˵�p������ָ��
void Insertfrontnode(Lnode* p, int data)//��p���ǰ�����һ����㣬����Ϊdata
{
	//�жϲ����Ϸ���
	if (!p)
	{
		perror("Insert����");
		return;
	}

	//���½������ڴ�
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	if (!pc)
	{
		perror("Initlist");
		return;
	}
	//�Ⱥ��
	pc->next = p->next;
	p->next = pc;
	pc->a = p->a;//ָ�벻�ý�����ֱ�ӽ���p��p+1��pc�����data����
	p->a = data;
}


//int main()
//{
//	Linklist l;
//	Initlist(l);
//	int i = 5;//λ��
//	int data = 10;
//	Insertnode(l, i, data);
//
//	return 0;
//}


//��λ����ɾ��
//��ͷ������
void Deletenode(Lnode* l, int i, int* ret)//ɾ��p�����iλ���Ԫ�أ�������ɾ����Ԫ�ص�����a����ΪҪ���������õ�ʱint*��
{
	//�����Ϸ��Լ��
	if (i < 1)
	{
		perror("Del����");
		return;
	}
	//��i-1
	int j = 0;
	Lnode* tmp = l;
	while (tmp!=NULL && j < i - 1)
	{
		tmp = tmp->next;
		j++;
	}
	if (!tmp)
	{
		perror("�Ƿ�����");
		return;
	}
	if (tmp->next == NULL)
		return;

	//ɾ����� ��ɾ���Ľ���data��������Ȼ���i����next����i-1��㣬Ȼ���i���free�ˡ�
	Lnode* q = tmp->next;//qָ���i���ڵ�
	*ret = q->a;
	tmp->next = q->next;//��q�ĺ�̸���p
	free(q);//�ѵ�i������ͷš�
}




//ָ������ɾ��


//���ҽ��
//��λ����(��ͷ���)
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


//��ֵ����
Lnode* Searchvaluenode(Lnode* l, int value)
{
	Lnode* p = l;
	while (p != NULL && p->a != value)
		p = p->next;
	return p;
}

//���
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



//����Ĵ���
//ͷ�巨
Linklist List_HeadInsert(Lnode* l)
{
	//��ʼ��һ������
	Linklist* pc = (Linklist*)malloc(sizeof(Lnode));//����ͷ���
	if (!pc)
		return;//�п�
	l = pc;
	l->next = NULL;//��ʼ��l.next

	//ͷ�巨
	int x;
	Lnode*p;//����p���ڲ�����
	scanf("%d", &x);
	while (x != 9999)//����9999���������������������һ�������������
	{
		//��ʼ����
		Lnode* p = (Lnode*)malloc(sizeof(Lnode));
		p->a = x;
		p->next = l->next;
		l->next = p;
		scanf("%d", &x);
	}

	return l;

}


// β�巨
Linklist Insert_Taillist(Lnode* l)
{
	//��ʼ��һ������
	Linklist* pc = (Linklist*)malloc(sizeof(Lnode));//����ͷ���
	if (!pc)
		return;//�п�
	l = pc;
	l->next = NULL;//��ʼ��l.next

	//β������
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
//���������




int main()
{
	Linklist l;
	Initlist(l);
	int i = 5;//λ��
	int data = 10;
	Insertnode(l, i, data);

	return 0;
}
