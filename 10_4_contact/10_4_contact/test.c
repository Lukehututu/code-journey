#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


//test.c����ͨѶ¼��ģ��

//ͨѶ¼---��̬�汾
//1.�ܹ����1000�˵���Ϣ
//2.ÿ���˵���Ϣ����
//   ����
//   ����
//   �绰
//   ��ַ
//3.�ܹ������˵���Ϣ
//4.ɾ��ָ���˵���Ϣ
//5.�޸�ָ���˵���Ϣ
//6.����ָ���˵���Ϣ
//7.����ͨѶ¼����Ϣ

//�汾2
//��̬�����İ汾
//1>ͨѶ¼��ʼ���Ժ��ܴ������˵���Ϣ
//2>���ռ�������ʱ����������2��


//�汾3
//��ͨѶ¼�˳���ʱ�򣬰���Ϣд���ļ�
//�����س����ʱ�򣬶�ȡ����




enum Option
{
	EXIT,
	ADD,
	SUB,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};


int main()
{
	//��ȡ�ļ�����
	ReadContact(&con);
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case SUB:
			SUBContact(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			Modify(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case PRINT:
			PrintCon(&con);
			break;
		case EXIT:
			//��Ҫ������Ϣ���ļ�
			SaveContact(&con);
			ExitContact(&con);
			break;
		default:
			printf("�Ƿ�����\n");
			break;
		}
	} while (input);

	return 0;
}
