#define _CRT_SECURE_NO_WARNINGS 1
//д����
//1.д����������main������---����ֻ��һ��main����
//ִ�У�c���Դ��������ĵ�һ�п�ʼִ��
//printf -> �⺯��
//printf��ʹ�ã�Ҫ����ͷ�ļ� stdio.h


#include <stdio.h>
/*
int main()
{
	printf("C����\n");
	return 0;

}
*/
//���д���  ctrl+f5

 //��������
/*
char		�ַ���������
short		������
int			����
long		������
long long	����������
float		�����ȸ�����
double		˫���ȸ�����
*/

//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	
//	return 0;
//}


//int main()
//{
//	//sizeof - �ؼ��� - ������ - -�������ͻ��߱�����ռ�ռ�Ĵ�С
//	//sizeof�ĵ�λ��   �ֽ�byte
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
//	//byte-�ֽ� = 8bit
//	//KB = 1024byte
//	//MB = 1204KB
//	//GB = 1024MB
//	//TB = 1024GB
//	//PB = 1024TB
//
//
//	//���͵�ʹ��-- ����
//	char ch = 'w';
//	int weight = 120;
//	int salary = 20000;
//}

//����-�����ܸı�������ͱ���-���ܸı������
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
//	//%d - ����
//	//%f - float
//	//%lf - double
//}

//�����ķ��ࣺ
	//�ֲ�������{}�ⲿ�����
	//ȫ�ֱ�����{}�ڲ������


//ȫ�ֱ���
//int a = 100;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�����飺��ȫ�ֱ����;ֲ�����������д��һ����
//	printf("%d\n",a);
//	return 0;
//}

//дһ��������2�������ĺ�
//scanf���������뺯��
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



//Դ�ļ��ĵ�һ�У����ϣ�#define _CRT_SECURE_NO_WARNINGS 1




