#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//struct s
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//
//
//int main()
//{
//	struct s a = {"hello",10,5.5f};
//	char buf[20] = { 0 };
//	struct s tmp = { 0 };
//	sprintf(buf, "%s %d %f\n", a.arr,a.age,a.f);
//	printf("%s ", buf);
//	sscanf(buf, "%s %d %f\n",tmp.arr,&(tmp.age),&(tmp.f) );
//	printf("%s %d %f", tmp.arr,tmp.age,tmp.f);
//	return 0;
//}



//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopne");
//		return 1;
//	}
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fseek(pf, -1, SEEK_CUR);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	ch = fgetc(pf);
//	ch = fgetc(pf);
//	int off=ftell(pf);
//	printf("%d\n", off);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	FILE* pc = fopen("C:\\Users\Luk1\source\\repos\\10_6\\10_6\\test.txt", "wb");
//	if (pc == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(a, sizeof(int), 1, pc);
//
//	return 0;
//}

//把text.txt 拷贝到text2.txt



//int main()
//{
//	FILE* pfread = fopen("C:\\Users\Luk1\source\\repos\\10_6\\10_6\text.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pfwrite = fopen("C:\\Users\Luk1\source\\repos\\10_6\\10_6\text.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//	}
//	//读写文件
//	int ch = 0;
//	ch = fgetc(pfread);
//	while(ch!=EOF)
//	{
//		fputc(ch, pfread);
//
//	}
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}
//#define SQUARE(x) ((x)*(x))
//#define print(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	printf("hello world\n");
//	printf("hello"" world\n");
//
//	///*printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __FUNCTION__);
//	//*/
//	//printf("%d\n", SQUARE(3 + 1));
//	//printf("%d\n", 3 + 1 * 3 + 1);
//
//
//	int a = 10;
//	print(a);
//	/*printf("the value of "#x" is %d", x);*/
//	printf("the value of ""a"" is %d\n", a);
//	return 0;
//}

//#define CAT(x,y) x##y
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("m=%d\n", m);
//	//printf("%d",m)
//	printf("%d %d", a, b);
//
//	return 0;
//}


//#define MALLOC(num,type)  malloc(num*sizeof(type))
//#define M 5
//int main()
//{
//	MALLOC(10, int);
//	int a = 0;
//    //#undef M
//	a = M;
//	printf("%d ", a);
//
//
//	return 0;
//}



//#define PRINT
//int main()
//{
//#ifndef PRINT
//	printf("hehe\n");
//#endif
//
//	return 0;
//}