#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*****动态内存管理*****/

//malloc
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int)*10);		//INT_MAX  //c语言标准未定义size为0的情况
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));		//打印错误原因
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;
//			printf("%d\n",*(p+i));
//		}
//	}
//	free(p);		//不主动回收，p指向的空间要等到程序结束才会释放
//	p = NULL;		//防止之前分配的空间被误操作
//	return 0;
//}

//calloc

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));		//申请10个整型空间并初始化为0，malloc不会初始化
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));		//打印错误原因
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			printf("%d\n",*(p+i));
//		}
//	}
//	free(p);		//free释放动态开辟的空间
//	p = NULL;
//	return 0;
//}

//realloc  //调整动态开辟内存的大小

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = NULL;
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;
//			//printf("%d\n",*(p+i));
//		}
//	}
//	//如果p指向的空间后面有足够的空间进行追加，则直接追加，然后返回p
//	//如果p指向的空间后面没有足够的空间进行追加，则realloc函数会重新找一个新的内存区域来开辟一块满足需求的空间，并把原来内存中的数据
//	//拷贝进来，然后将旧的空间释放，最后返回新开辟的内存空间地址
//	//p = (int*)realloc(p,20);		//不能直接将realloc的返回值赋给p，防止realloc分配失败，返回空指针，导致之前p指向的内存丢失
//	ptr = (int*)realloc(p,20*sizeof(int));
//	if(ptr!=NULL)
//	{
//		p = ptr;
//		for(i=10;i<20;i++)
//		{
//			*(p+i) = i;
//			//printf("%d\n",*(p+i));
//		}
//		/*for(i=0;i<20;i++)
//		{
//			printf("%d\n",*(p+i));
//		}*/
//	}
//	for(i=0;i<20;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)realloc(NULL,40);		//给realloc传空指针时realloc的作用等价于malloc
//	return 0;
//}

//动态内存常见错误

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i) = 0;		//不判断malloc是否分配成功，直接进行解引用，均为非法操作  //可能是对空指针进行解引用
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;		//对动态开辟的内存进行越界访问
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);		//对非动态开辟的内存进行free
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*p++ = i;		//p进行了加操作，不再指向最初动态分配的空间的基地址
//		}
//	}
//	free(p);		//使用free释放动态开辟内存的一部分
//	p = NULL;
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	free(p);		//为防止对同一块动态内存进行多次释放，应在释放后将p置为NULL
//	free(p);		//对同一块动态内存进行多次释放
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(100);
//	if(p!=NULL)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();		//动态开辟的内存忘记释放(内存泄露)
//	while(1);
//	return 0;
//}

//经典题型

//1
//#include <string.h>
//#include <stdlib.h>
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);		//出了GetMemory之后p就不存在了，但分配的空间未释放，会造成内存泄露
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(str);		//值传递  //无论所传参数的类型是不是地址，只要是传的变量本身，都是值传递？
//	strcpy(str,"hello there");		//str依旧为空
//	printf(str);
//}
//int main()
//{
//	test();
//	//char arr[] = "abcedf";
//	//char* str = "abcdef";
//	//printf(str);
//	//printf("\n");
//	//printf("%s\n",str);
//	//printf("abcdef\n");		//三种打印方式等价
//	//printf(arr);
//	//printf("\n");
//	return 0;
//}


//#include <string.h>
//#include <stdlib.h>
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello there");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//2
//char* GetMemory(void)
//{
//	char p[] = "hello there";		//p[]的声明周期仅限于GetMemory
//	return p;		//栈上的空间地址不能随便返回
//}
//void test(void)
//{
//	char* str = NULL;
//	str = (char*)GetMemory;		//非法访问内存	
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;		//static int a = 10;
//	printf("%p\n",&a);
//	return &a;		//返回栈区地址
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n",p);
//	*p = 20;		//非法访问内存
//	return 0;
//}


//3
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void GetMemory(char* *p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	//使用前未判空
//	strcpy(str,"hello there");
//	printf(str);
//	//使用完未free
//}
//int main()
//{
//	test();
//	return 0;
//}

//4
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello there");
//	free(str);
//	//此处应手动将str置空
//	if(str!=NULL)
//	{	
//		//非法访问已释放的内存
//		strcpy(str,"hello there");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

/*****柔性数组*****/
//结构体中最后一个元素允许是未知大小的数组，就叫做柔性数组成员
//柔性数组有利于提高访问速度，减少内存碎片
//柔性数组有利于释放空间

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S 
//{
//	int n;
//	int arr[];		//未知大小		//也可以写成int arr[0];		//柔性数组成员，数组的大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));		//计算结构体大小时不包含柔性数组的大小
//	int i = 0;
//	struct S* pps = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));		//柔性数组大小为5
//	ps->n = 100;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	pps = (struct S*)realloc(ps,44);
//	if(pps != NULL)
//	{
//		ps = pps;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=-0;i<10;i++)
//	{
//		printf("%d\n",ps->arr[i]);
//	}
//	free(ps);		//释放ps指向的空间
//	ps = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct S 
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	int i = 0;
//	int* pps = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->n = 100;
//	ps->arr = (int*)malloc(sizeof(int)*5);
//	printf("%d\n",ps->n);
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	pps = (int*)realloc(ps->arr,40);
//	if(pps != NULL)
//	{
//		ps->arr = pps;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=-0;i<10;i++)
//	{
//		printf("%d\n",ps->arr[i]);
//	}
//	free(ps->arr);		//释放ps.arr指向的空间  //应该先释放ps->arr
//	ps->arr = NULL;
//	free(ps);			//释放ps指向的空间
//	ps = NULL;
//	return 0;
//}


