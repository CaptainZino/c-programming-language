#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ݹ�
//�������ĵݹ�ᵼ��ջ���(stack overflow)
//�����ݹ�һ��Ҫ��һ��������������������ʱ���ݹ鲻�ٽ���
//ÿ�εݹ����֮���Խ��Խ�ӽ������������
//��������ͬʱ�����������������Ͳ��ᵼ��ջ���(������δ�ﵽ��������Ѿ��ݹ��������)
//�ݹ�͵���

//����һ������ֵ����˳���ӡÿһλ
//void print(int num)
//{
//	if(num>9)
//	{
//		print(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main()
//{
//	unsigned num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//���ַ�������

//int my_strlen(char* parr)
//{
//	int cnt = 0;
//	while(*parr != '\0')
//	{
//		cnt++;
//		parr++;
//	}
//	return cnt;
//}
//int main()
//{
//	char arr[] = "hello there";
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}

//�������м����(cnt)�����ַ�������
//int my_strlen(char* parr)
//{
//	if(*parr != '\0')
//	{
//		parr++;
//		return my_strlen(parr)+1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello there";
//	int len = my_strlen(arr);
//	printf("len=%d\n",len);
//	return 0;
//}

//��n�Ľ׳�

//int Fac(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n-1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55
//�ݹ�ķ�ʽ���n��쳲�������
//int count = 0;
//int Fib(int n)
//{
//	if(n==3)
//	{
//		count++;  //���Ե�����쳲�������������Ĵ���
//	}
//	if(n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1)+Fib(n-2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int fib_num = 0;
//	scanf("%d",&n);
//	//TDD-������������
//	fib_num = Fib(n);
//	printf("%d\n",fib_num);
//	printf("%d\n",count);
//	return 0;
//}

//�����ķ�ʽ���n��쳲�������
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int fib_num = 0;
//	scanf("%d",&n);
//	fib_num = Fib(n);
//	printf("%d\n",fib_num);
//	return 0;
//}

//