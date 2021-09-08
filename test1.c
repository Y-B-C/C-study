#define _CRT_SECURE_NO_WARNINGS 1
//写代码
//1.写出主函数（main函数）---有且只有一个main函数
//执行：c语言从主函数的第一行开始执行
//printf -> 库函数
//printf的使用：要引用头文件 stdio.h


#include <stdio.h>
/*
int main()
{
	printf("C语言\n");
	return 0;

}
*/
//运行代码  ctrl+f5

 //数据类型
/*
char		字符数据类型
short		短整形
int			整形
long		长整形
long long	更长的整形
float		单精度浮点数
double		双精度浮点数
*/

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	
//	return 0;
//}


//int main()
//{
//	//sizeof - 关键字 - 操作符 - -计算类型或者变量所占空间的大小
//	//sizeof的单位是   字节byte
//	printf("%d\n", sizeof(char));			
//	printf("%d\n", sizeof(short));			
//	printf("%d\n", sizeof(int));		
//	printf("%d\n", sizeof(long));			
//	printf("%d\n", sizeof(long long));		
//	printf("%d\n", sizeof(float));		
//	printf("%d\n", sizeof(double));			
//	printf("%d\n", sizeof(long double));		
//
//	return 0;
//
//	//byte-字节 = 8bit
//	//KB = 1024byte
//	//MB = 1204KB
//	//GB = 1024MB
//	//TB = 1024GB
//	//PB = 1024TB
//
//
//	//类型的使用-- 例：
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//}

//常量-（不能改变的量）和变量-（能改变的量）
//

//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%fl\n", weight);
//	return 0;
//	
//	//%d - 整形
//	//%f - float
//	//%lf - double
//}

//变量的分类：
	//局部变量：{}外部定义的
	//全局变量：{}内部定义的


//全局变量
//int a = 100;
//int main()
//{
//	//局部变量
//	int a = 10;
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议：把全局变量和局部变量的名字写成一样的
//	printf("%d\n",a);
//	return 0;
//}

//写一个代码求2个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);

	return 0;
}



//源文件的第一行，加上：#define _CRT_SECURE_NO_WARNINGS 1




