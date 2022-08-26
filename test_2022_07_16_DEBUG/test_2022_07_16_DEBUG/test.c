#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//DEBUG:调试版本：包含调试信息，可调试
//Release：发布版本：不能调试

//F5:启动调试，跳到下一个断点处，要和F9(设置断点)配合使用
//F10：逐过程
//F11：逐语句

//int main()
//{
//	int i = 0;
//	for(i=0;i<100;i++) 
//	{
//		printf("%d\n",i);
//	}
//	for(i=0;i<100;i++) 
//	{
//		printf("%d\n",10-i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	for(i=0;i<15;i++) 
//	{
//		printf("hehe\n");	
//		arr[i] = 0;
//		//栈区的使用：先使用高地址的空间，再使用低地址的空间
//		//数组在内存中连续存放，随着下标的增长，地址由低到高变化
//		//交换i和arr定义的位置就不会死循环，Release版会调整两者的位置
//	}
//	//system("pause");
//	return 0;
//}

//int add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = add(a,b);	//F11调试可进入add函数	//SHIFT+F11:立刻跳出add
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//模拟实现strcpy

//void my_strcpy(char* des,char* src)
//{
//	while((*src)!='\0')
//	{
//		*(des++) = *(src++);	//有括号和无括号？	//后置++
//	}
//	*des = *src;
//	
//}
//int main()
//{
//	char arr1[] = "#########################";
//	char arr2[] = "hello there";
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1,arr2);
//	printf(arr1);
// 	return 0;
//}

//优化
//char* my_strcpy(char* des,const char* src)
//{
//	char* p = des;
//	assert(des != NULL && src != NULL);	//断言
//	//将src指向的字符串拷贝到des中，包含'\0'
//	while(*des++ = *src++)	//等号表达式为*src的值，*src不等于'\0'时表达式为真
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char arr1[] = "#########################";
//	char arr2[] = "hello there";
//	//strcpy(arr1,arr2);
//	printf(my_strcpy(arr1,arr2));
// 	return 0;
//}

//int main()
//{
//	const int t = 5;
//	const int i = 10;
//	const int n = 100;
//	int* pp = NULL;
//	int* const p1 = NULL;
//	const int* p = &i;
//	//*p = 20;	//err	//const放在指针变量*的左边时，修饰的是*p，也就是说不能通过p来改变i的值
//	printf("%d\n",i);
//
//	pp = &t;
//	*pp = 15;
//	printf("%d\n",t);
//
//	//p1 = &n;	//const放在指针变量*的右边时，修饰的是p，其内容(里面存的地址)不能改变
//	return 0;
//}


//strlen
int my_strlen(const char* str)
{
	int len = 0;
	assert(str != NULL);	//保证指针有效性
	while(*str++ != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char arr[] = "abcdef";
	//char* arr1 = NULL;
	printf("%d\n",my_strlen(arr));
	return 0;
}