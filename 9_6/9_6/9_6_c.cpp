#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��Ŀ����ʮ������������һ����
int main()
{
	//�����ȸ�ʮ��������һ�������ǵĿռ�
	int arr[10] = { 0 };
 //�����{0}ʵ������һ�����������ô�����
	//����ռ�������ҵ���
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//���ڿռ���������
	int max = arr[0];
	for ( i = 0; i <10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	//�ٽ�����ӡ����
	printf("max=%d", max);
	return 0;
}

 