#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数递归
//无条件的递归会导致栈溢出(stack overflow)
//函数递归一定要有一个限制条件，满足条件时，递归不再进行
//每次递归调用之后会越来越接近这个限制条件
//但并不是同时满足以上两个条件就不会导致栈溢出(在条件未达到的情况下已经递归次数过多)
//递归和迭代

//接收一个整型值，按顺序打印每一位
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

//求字符串长度

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

//不创建中间变量(cnt)，求字符串长度
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

//求n的阶乘

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
//递归的方式求第n个斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	if(n==3)
//	{
//		count++;  //测试第三个斐波那契数被计算的次数
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
//	//TDD-测试驱动开发
//	fib_num = Fib(n);
//	printf("%d\n",fib_num);
//	printf("%d\n",count);
//	return 0;
//}

//迭代的方式求第n个斐波那契数
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