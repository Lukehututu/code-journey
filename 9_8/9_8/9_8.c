#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//&&����  a&&b ֻ��������Ϊ������棬��һ��Ϊ�ٶ��Ǽ١�
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//	return 0;
//}

//||����  a||b��ֻҪ��һ��������Ϊ�棬ȫ�ٲ�Ϊ�١�

//int main()
//{
//	int a = 6;
//	int b = 0;
//	int c1= a || b;
//	printf("%d\n", c1);
//
//	a = b = 0;
//	int c2= a || b;
//	printf("%d\n", c2);
//
//
//	return 0;
//}


//exp1?exp2:exp3   ���exp1Ϊ�棬�����exp2�����Ϊexp2�Ľ����������Ϊexp3�Ľ����

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max;
//	max = a > b ? a : b;
//	printf("max=%d", max);
//	return 0;
//}

//typedef �����ض���

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int a;
//	u_int b;  //��ʱ��������ͬ��������ֻ�Ǳ���
//	return 0;
//}

//static   ��̬��


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//
//	int i = 0;
//
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;  //static ���ξֲ�����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//define���峣��

//#define MAX 1000
//
//int main()
//{
//	printf("%d", MAX);
//	return 0;
//}

//#define ADD(x,y)  (x+y)
//
//int main()
//{
//	printf("%d", 4 * ADD(2, 3));
//	return;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int* pa = &a;//pa��ָ�������ר�Ŵ�ŵ�ַ
//	//int int ˵��ָ��ִ�еĶ�����int���͵� 
//	//*˵��pa��ָ�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;
//
//	printf("%d", a);
//
//	return 0;
//}



//int main()
//{
//	printf("%d ", sizeof(int*));
//	printf("%d ", sizeof(char*));
//	printf("%d ", sizeof(double*));
//	printf("%d ", sizeof(float*));
//	printf("%d ", sizeof(long*));
//
//
//	return 0;
//}


//�ṹ��(������c���Դ����µ����ͳ���)

struct Stu
{
	char name[10];
	int age;
	double score;
};



int main()
{
	//�ṹ��Ĵ����ͳ�ʼ��
	//�ҵ��ṹ��ĳ�Ա�����ʳ�Ա�õ�.
	//�ṹ��Ļ�������
	struct Stu s = { "Luke",20,85.5 };
	printf("1:%s %d %lf", s.age, s.name, s.score);
	struct Stu* ps = &s;
	printf("2:%s %d %lf", (*ps).age, (*ps).name, (*ps).score);
	printf("3:%s %d %lf", ps->age, ps->name, ps->score);
	return 0;
}

//int Max(int x, int y) {
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int m = Max(x, y);
//	printf("m=%d", m);
//	return 0;
//}


//�ж�һ�������Ƿ��ܱ�5����
//int main()
//{
//	int M;
//	scanf("%d", &M);
//	int a = M % 5;
// �˴����Լ�Ϊ ��Ҫint a=M%5
// ֱ��if��M%5=0��
//	if (a==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
