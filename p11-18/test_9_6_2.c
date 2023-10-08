#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////作用域和生命周期
//enum Sex
//{
//	male=3,//赋初值
//    female,//几个枚举常量通过，分隔
//    secret,
//};
//int main()
//{
//	printf("male=%d\n", male); 
//	printf("female=%d\n", female); 
//	printf("secret=%d\n", secret);
//	return 0;
//}


//"andabd"字符串  实际上在末尾还隐藏了\0即"andabd\0"所以实际上还多了个元素\0
//数组的表达方式
//char arr1[]="abcde"  //字符串直接用""   此时虽然只有5个字，但后面省略了结束字符\0所以实际上有6个字符
//char arr2[] = {'a','b','c'}//字母用{}中间再用，隔开  当前面未定义数组大小，但后面给定了内容，编译器会根据内容自动识


//给数组求长度用函数stlen  （string length）  格式为
//printf("%d",strlen(数组名称))
//例如
//int main()
//{
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//
//	printf("%d\n", strlen(arr1));//（计算字符串长度）
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", arr1);
//	printf("%d\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	int length = 0;
//	length = sizeof(arr1) / sizeof(arr1[0]);
//		printf("length=%d", length);
//		return 0;
//}

//转义字符例子：
//int main()  （例子1）
//{
//	printf("a\n");
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	return 0;
//}
//int main()
//{
//	//printf("%d", '\125');
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	printf("%d\n", strlen("c:est8est.c"));
//	printf("%d\n", strlen("c:\test8est.c"));
//	printf("%d\n", strlen("c:est\328est.c"));
//	printf("%d\n", strlen("c:est8\test.c"));
//	printf("%d\n", strlen("c:\\test\\328\\test.c"));
//
//	return 0;
//}
//注释
//c++的注释风格：
//即//+要注释的内容
//c语言的注释风格
// /*开始  */结束

//选择语句 if else语句

//int main()
//{
//	printf("你想好好学习吗<1/0>?\n");
//	int input = 0;
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("走上人生巅峰\n");
//	}
//	else 
//	{
//		printf("回家卖红薯\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a, b,sum;
//	scanf("%d%d", &a, &b);//scanf函数%d%d之间不加空格也可以，但加一万个空格也行。
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//while循环的用法
//int main()
//{
//	int line = 0;
//	while (line < 10000) {
//		printf("敲代码：%d\n", line);
//		line++;
//	}
//	if (line == 10000) {
//		printf("能力提升");
//	}
//	return 0;
//}



//函数
//先定义一个函数
//int Add(int a,int b)
//{
//	int z=a+b;
//	return z;
//}
//int main() 
//{
//	printf("请输入两个数字：");
//	int x, y,c;
//	scanf("%d%d", &x, &y);
//	Add(x, y);
//	printf("和为：%d", Add);  //此处Add是一个函数，但此处应该是放一个定义了的值，所以程序错误
//	return 0;
//

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = Add(a, b);
//	printf("%d", c);   (这种就是正确的)
//	return 0;
//}

//数组

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	while (i < 5) {
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//   除号操作符/
//int main()
//{
//	float a = 9 / 4;
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	float a = 9 / 4.0;
//	printf("%f", a);
//	return 0;
//}
//

//%取模（余）符号 即运算出来得到的是余数
//int main()
//{
//	int a = 9 % 4;
//	printf("%d", a);
//	return 0;
//}



//左移操作符<<
int main()
{
	int a = 5;
	int b = a <<1;
	printf(" % d", b);
	return 0;
}