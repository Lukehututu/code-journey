#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//void InitCon(Con* pc)
//{
//	memset(pc->S,0,sizeof(pc->S));
//	pc->sz = 0;
//}
void CheckC(Con* pc)
{
	if (pc->sz == pc->capcity)
	{
		PeoInfo* p = (PeoInfo*)realloc(pc->S, pc->capcity * sizeof(PeoInfo) + INC * sizeof(PeoInfo));
		if (p == NULL)
		{
			printf("����ʧ��\n");
			perror(Add);
			return;
		}
		else
		{
			printf("���ݳɹ�\n");
			pc->S = p;
			pc->capcity += INC;
		}
	}
}
void Load(Con* pc)
{
	FILE* ptr = fopen("data.txt", "r");
	if (ptr == NULL)
	{
		perror("Load");
		return;
	}

	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, ptr))//fread�ķ���ֵ�������������ݵĸ���������0Ϊ�پ�������
	{
		CheckC(pc);
		pc->S[pc->sz] = tmp;
		pc->sz++;
	}
	
	fclose(ptr);
	ptr = NULL;

}


void InitCon(Con* pc)
{
	PeoInfo* pt = (PeoInfo*)calloc(DEFAULT, sizeof(PeoInfo));
	if (pt == NULL)
	{
		perror("InitCon");
		return;
	}
	pc->S = pt;
	pc->capcity = 3;
	pc->sz = 0;
	Load(pc);

}


void Add(Con* pc)
{
	CheckC(pc);
	printf("������������");
	scanf("%s", pc->S[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", &(pc->S[pc->sz].sex));
	printf("���������䣺");
	scanf("%d", &(pc->S[pc->sz].age));
	printf("������绰��");
	scanf("%s", pc->S[pc->sz].num);
	printf("������סַ��");
	scanf("%s", pc->S[pc->sz].add);
	pc->sz++;
	printf("���ӳɹ���\n");

}


void Print(Con* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("%-10s%-20s%-5s%-5s%-10s\n", "����", "�绰", "����", "�Ա�", "סַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s%-20s%-5d%-5c%-10s\n", pc->S[i].name,
											pc->S[i].num,
											pc->S[i].age,
											pc->S[i].sex,
											pc->S[i].add);
	}
}


int find_by_name(char name[20],Con* pc)
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(name, pc->S[i].name)==0)
			return i;
	}
	return EOF;
}


void Sub(Con* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ��\n");
		return;
	}
	char n[20] = { 0 };
	printf("������Ҫɾ������ϵ�˵�������");
	scanf("%s", n);
	int ret = find_by_name(n,pc);
	if (ret==EOF)
		printf("����ϵ�˲�����\n");
	for (int i = ret; i < pc->sz; i++)
	{
		pc->S[i] = pc->S[i + 1];
	}
	printf("ɾ���ɹ���\n");
	pc->sz--;
}


void Ser(Con* pc)
{
	char name[10] = { 0 };
	printf("������Ҫ��ѯ����ϵ�˵�������");
	scanf("%s", name);
	int i = find_by_name(name, pc);
	if (i==EOF)
	{
		printf("����ϵ�˲�����\n");
		return ;
	}
	printf("%-10s%-20s%-5s%-5s%-10s\n", "����", "�绰", "����", "�Ա�", "סַ");
	printf("%-10s%-20s%-5d%-5c%-10s\n", pc->S[i].name,
										pc->S[i].num,
										pc->S[i].age,
										pc->S[i].sex,
										pc->S[i].add);
	return;
}


void Mod(Con* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޸�ʧ��\n");
		return;
	}
	char name[10] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ�˵�������");
	scanf("%s", name);
	int i = find_by_name(name, pc);
	if (i == EOF)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	printf("������������");
	scanf("%s", pc->S[i].name);
	printf("�������Ա�");
	scanf("%s", &(pc->S[i].sex));
	printf("���������䣺");
	scanf("%d", &(pc->S[i].age));
	printf("������绰��");
	scanf("%s", pc->S[i].num);
	printf("������סַ��");
	scanf("%s", pc->S[i].add);
	printf("�޸ĳɹ�\n");
	return;
}



void Exit(Con* pc)
{
	FILE* ptr = fopen("data.txt", "w");
	if (ptr == NULL)
	{
		perror("Exit");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->S+i, sizeof(PeoInfo),1,ptr);
	}
	fclose(ptr);
	ptr = NULL;
	return;
}


