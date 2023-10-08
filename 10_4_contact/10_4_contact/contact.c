#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"




��ʼ������
void InitContact(Contact* pc)
{
	memset(pc->data,0, sizeof(pc->data));
	pc->sz = 0;
	pc->capacity = 0;
}

//��̬�汾


void Load(Contact* pc)
{

	FILE* pf = fopen("contact.date","r");
	if (pf == NULL)
	{
		perror(Load);
		return;
	}
	PeoInfo tmp = { 0 };
	while (fread(pc, 1, sizeof(PeoInfo), pf) == 0)
	{
		pc.data[pc.size] = tmp;

	}

	//����Ϣ
	
	//��������
	fclose(pf);
	pf = NULL;
}
//��װһ�����ݺ���
 void inc_capacity(Contact* pc)
{

}




//��̬�汾
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)calloc(DEFAULT_NUM, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror(InitContact);
	}
	pc->sz = 0;//sz,����ʹ�õ�
	pc->capacity = DEFAULT_NUM;//һ��ʼ������
}

//�˵�����
void menu()
{
	printf("************************************\n");
	printf("******** 1>add     2>sub    ********\n");
	printf("******** 3>search  4>modify ********\n");
	printf("******** 5>sort    6>print  ********\n");
	printf("******** 0>exit             ********\n");
	printf("************************************\n");
}

//��ӡ����
void PrintCon(const Contact* pp)
{
	int i = 0;
	printf("%-10s\t%-20s\t%-5s\t%-5s\t%-20s\t", "����", "�绰", "����", "�Ա�", "סַ");
	printf("\n");
	for (i = 0; i < pp->sz; i++)
	{
		printf("%-10s\t%-20s\t%-5d\t%-5s\t%-20s\t",pp->data[i].NAME,
			                                       pp->data[i].TELE,
			                                       pp->data[i].AGE,
												   pp->data[i].SEX,
												   pp->data[i].ADDRESS);
		printf("\n");
	}
	printf("\n");
}

//���Ӻ���
void AddContact(Contact* con)
{
	if (con->sz >= con->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, con->capacity+INC_NUM * sizeof(PeoInfo));//
		if (ptr != NULL)
		{
			printf("���ݳɹ�\n");
			con->data = ptr;
			con->capacity +=INC_NUM;		
		}
		else
		{
			perror(AddContact);
			printf("����ʧ��\n");
			return ;
		}
	}
	/*if (con->sz < con->capacity)
	{*/
		printf("����������:>");
		scanf("%s", con->data[con->sz].NAME);
		//scanf("%s", con->data[con->sz]->NAME)�����ͻᱨ��
		printf("������绰:>");
		scanf("%s", con->data[con->sz].TELE);
		printf("�������Ա�:>");
		scanf("%s", con->data[con->sz].SEX);
		printf("����������:>");
		scanf("%d", &(con->data[con->sz].AGE));
		printf("������סַ:>");
		scanf("%s", con->data[con->sz].ADDRESS);
		con->sz++;
		printf("��ӳɹ�\n");
	/*}*/
	//else if (con->sz == MAX_NUM)
	//{
	//	printf("ͨѶ¼�������޷��������\n");
	//	return;
	//}
}

//ɾ������
void SUBContact(Contact* pc)
{
	//��ȥ�ж�ͨѶ¼��û����
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ��\n");
	}
	//��ȥ������û�������
	printf("������Ҫɾ������ϵ�˵�����:>");
	char name[10] = { 0 };
	scanf("%s", name);
	int ret = Find_by_name(pc,name);
	if (ret!=-1)
	{
		int i = 0;
		for (i=ret; i < pc->sz - 1; i++)
		{
			            pc->data[i]=pc->data[i+1];
		}
		printf("ɾ���ɹ�\n");
		pc->sz--;
	}
	else
	{
		printf("���޴���\n");
	}
}

//ͨ�����ֲ��Һ���
static int Find_by_name(Contact* pc,char* name)
{
	int i = 0;
	for (i =0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].NAME, name) == 0)
			return i;
	}
	 return -1;
}

//���Һ���
void Search(const Contact* pc)
{
	printf("������Ҫ������Ϣ����ϵ�˵�����:>");
	char name[10] = { 0 };
	scanf("%s", name);
	int ret = Find_by_name(pc, name);
	if (ret != -1)
	{
		int i = ret;
		printf("%-10s\t%-20s\t%-5s\t%-5s\t%-20s\t", "����", "�绰", "����", "�Ա�", "סַ");
		printf("\n");
		printf("%-10s\t%-20s\t%-5d\t%-5s\t%-20s\t", pc->data[i].NAME,
				pc->data[i].TELE,
				pc->data[i].AGE,
				pc->data[i].SEX,
				pc->data[i].ADDRESS);
		printf("\n");
	}
	else
	{
		printf("���޴���\n");
	}
}

//�޸���Ϣ����
void Modify(Contact* pc)
{
	printf("������Ҫ�޸���Ϣ����ϵ�˵�����:>");
	char name[10] = { 0 };
	scanf("%s", name);
	int ret = Find_by_name(pc, name);
	if (ret != -1)
	{
		int i = ret;
		printf("�������µ�����:>");
		scanf("%s", pc->data[i].NAME);
		printf("�������µĵ绰:>");
		scanf("%s", pc->data[i].TELE);
		printf("�������µ��Ա�:>");
		scanf("%s", pc->data[i].SEX);
		printf("�������µ�����:>");
		scanf("%d", &(pc->data[i].AGE));
		printf("�������µ�סַ:>");
		scanf("%s", pc->data[i].ADDRESS);
	}
	else
	{
		printf("���޴���\n");
	}


}

//������(������ĸ����)
void Sort(Contact* pc)
{
	int i = 0;

	//ð������
	for (i = 0; i < pc->sz-2; i++)
	{
		int j = i;
		for (j = i; j < pc->sz-1; j++)
		{
			int ret = strncmp(pc->data[j].NAME, pc->data[j + 1].NAME, 4);

			if (ret > 0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
		}
	printf("����ɹ���\n");
}

//EXIT���� �ͷ��ڴ�
void ExitContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}





//�����ļ�����
void SaveContact(Contact* pc)
{
    FILE* pf=fopen("contact.dat","w");
	if (pf == NULL)
	{
		perror(SaveContact);
		return ;
	}
	int i = 0;
	for (i = 0;i < pc->sz; i++)
	{
		fwrite(pc->data+i, sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}