#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"




初始化函数
void InitContact(Contact* pc)
{
	memset(pc->data,0, sizeof(pc->data));
	pc->sz = 0;
	pc->capacity = 0;
}

//静态版本


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

	//放信息
	
	//考虑增容
	fclose(pf);
	pf = NULL;
}
//封装一个增容函数
 void inc_capacity(Contact* pc)
{

}




//动态版本
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)calloc(DEFAULT_NUM, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror(InitContact);
	}
	pc->sz = 0;//sz,正在使用的
	pc->capacity = DEFAULT_NUM;//一开始的容量
}

//菜单函数
void menu()
{
	printf("************************************\n");
	printf("******** 1>add     2>sub    ********\n");
	printf("******** 3>search  4>modify ********\n");
	printf("******** 5>sort    6>print  ********\n");
	printf("******** 0>exit             ********\n");
	printf("************************************\n");
}

//打印函数
void PrintCon(const Contact* pp)
{
	int i = 0;
	printf("%-10s\t%-20s\t%-5s\t%-5s\t%-20s\t", "姓名", "电话", "年龄", "性别", "住址");
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

//增加函数
void AddContact(Contact* con)
{
	if (con->sz >= con->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(con->data, con->capacity+INC_NUM * sizeof(PeoInfo));//
		if (ptr != NULL)
		{
			printf("增容成功\n");
			con->data = ptr;
			con->capacity +=INC_NUM;		
		}
		else
		{
			perror(AddContact);
			printf("增容失败\n");
			return ;
		}
	}
	/*if (con->sz < con->capacity)
	{*/
		printf("请输入姓名:>");
		scanf("%s", con->data[con->sz].NAME);
		//scanf("%s", con->data[con->sz]->NAME)这样就会报错
		printf("请输入电话:>");
		scanf("%s", con->data[con->sz].TELE);
		printf("请输入性别:>");
		scanf("%s", con->data[con->sz].SEX);
		printf("请输入年龄:>");
		scanf("%d", &(con->data[con->sz].AGE));
		printf("请输入住址:>");
		scanf("%s", con->data[con->sz].ADDRESS);
		con->sz++;
		printf("添加成功\n");
	/*}*/
	//else if (con->sz == MAX_NUM)
	//{
	//	printf("通讯录已满，无法继续添加\n");
	//	return;
	//}
}

//删除函数
void SUBContact(Contact* pc)
{
	//先去判断通讯录有没有人
	if (pc->sz == 0)
	{
		printf("通讯录为空，删减失败\n");
	}
	//再去查找有没有这个人
	printf("请输入要删除的联系人的姓名:>");
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
		printf("删除成功\n");
		pc->sz--;
	}
	else
	{
		printf("查无此人\n");
	}
}

//通过名字查找函数
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

//查找函数
void Search(const Contact* pc)
{
	printf("请输入要查找信息的联系人的姓名:>");
	char name[10] = { 0 };
	scanf("%s", name);
	int ret = Find_by_name(pc, name);
	if (ret != -1)
	{
		int i = ret;
		printf("%-10s\t%-20s\t%-5s\t%-5s\t%-20s\t", "姓名", "电话", "年龄", "性别", "住址");
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
		printf("查无此人\n");
	}
}

//修改信息函数
void Modify(Contact* pc)
{
	printf("请输入要修改信息的联系人的姓名:>");
	char name[10] = { 0 };
	scanf("%s", name);
	int ret = Find_by_name(pc, name);
	if (ret != -1)
	{
		int i = ret;
		printf("请输入新的姓名:>");
		scanf("%s", pc->data[i].NAME);
		printf("请输入新的电话:>");
		scanf("%s", pc->data[i].TELE);
		printf("请输入新的性别:>");
		scanf("%s", pc->data[i].SEX);
		printf("请输入新的年龄:>");
		scanf("%d", &(pc->data[i].AGE));
		printf("请输入新的住址:>");
		scanf("%s", pc->data[i].ADDRESS);
	}
	else
	{
		printf("查无此人\n");
	}


}

//排序函数(按首字母排序)
void Sort(Contact* pc)
{
	int i = 0;

	//冒泡排序
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
	printf("排序成功！\n");
}

//EXIT函数 释放内存
void ExitContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}





//保存文件函数
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