#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/*****预处理*****/
//test.c->test.i->test.s->test.c(test.obj)
//预编译：文本操作
//编译：把c代码翻译成汇编代码
//汇编：把汇编代码转换成二进制指令

//extern int add(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//	printf("a+b=%d\n",add(a,b));
//
//	return 0;
//}


//预定义符号
int main()
{
	//printf("%s\n",__FILE__);    //打印文件名(含绝对路径)
	//printf("%d\n",__LINE__);    //打印行号
	//printf("%s\n",__DATE__);    //打印日期
	//printf("%s\n",__TIME__);    //打印时间
	//printf("%c\n"__FUNCTION__); //打印函数名
	//printf("%d\n",__STDC__);    //若编译器遵循ANSI C，其值为1，否则未定义

	//写日志文件
	int i = 0;
	int arr[10] = {0};
	FILE* pf = fopen("log.txt","w");
	if(pf==NULL)
	{
		//perror("open file log.txt");  //打印错误信息
		printf("%d\n",errno);
		return 0;
	}
	for(i=0;i<10;i++)
	{
		arr[i] = i;
		fprintf(pf,"file:%s  line:%d  date:%s  time:%s  i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);  //写日志文件
	}
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}

//预处理指令
 
//#define定义符号
//#define do_forever for(;;)
//int main()
//{
//	do_forever;
//	return 0;
//}

//#define定义宏
//#define SQUARE(X) X*X  //左括号和SQUARE间不能有空格，否则是在定义一个符号(无参宏定义)
//int main()
//{
//	/*int ret = SQUARE(5);
//	printf("%d\n",ret);*/
//
//	int ret = SQUARE(5+1);  //宏的参数不是进行传参使用，而是替换
//	printf("%d\n",ret);		//5+1*5+1
//	return 0;
//}

//#define MAX 5
//#define DOUBLE(X) X+X
//#define DOUBLE1(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(MAX);  //宏中的参数可以是#define定义的其他变量，但是宏不能出现递归
//	int ret1 = 10*DOUBLE1(MAX);
//	printf("%d\n",ret);  //10*5+5
//	printf("%d\n",ret1);  //10*((5)+(5))
//	printf("MAX = %d\n",MAX);  //字符串里的MAX不会被替换
//	return 0;
//}

//#：将宏的参数插入到字符串中
//#define PRINT(X) printf("the value of "#X" is %d\n",X)  //#X会被替换成"X"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a" "is %d\n",b);
//	PRINT(b);
//	//printf("the value of ""b" "is %d\n",b);
//	return 0;
//}

//##：可以把位于它两边的符号合成一个符号，它允许宏定义从分离的文本片段创建标识符
//#define CAT(X,Y) X##Y
//int main()
//{
//	int abcdef = 2022;
//	printf("%d\n",CAT(ab,cdef));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}

//带副作用的宏参数
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++,b++);  //宏的参数带有副作用，不建议使用
//	//((a++)>(b++)?(a++):(b++))
//	printf("%d\n",max);
//	printf("%d\n",a);
//	printf("%d\n",b);
//
//	return 0;
//}

//宏和函数的对比
//命名约定：宏名全部大写，函数名不要全部大写

//宏适用于处理简单的运算
//int Max(int x,int y)
//{
//	return (x>y?x:y);
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	float c = 10.0f;
//	float d = 20.0f;
//	int max = MAX(a,b);
//	//宏定义在预处理阶段就完成了替换，没有调用和返回的开销
//	int max1 = Max(a,b);
//	//函数在调用的时候会有调用和返回的开销
//	float max2 = MAX(c,d);
//	//宏对参数类型没有限定
//	float max3 = Max(c,d);
//	//函数只能处理特定类型的参数
//
//	return 0;
//}

//每次使用宏定义，一份宏定义的代码就会被插入到代码中，当宏较长时，会大幅增加程序的长度
//宏无法调试
//宏于类型无关，不够严谨
//宏可能会带来运算符优先级的问题，导致程序容易出错

//宏可以做到函数做不到的事，比如：宏的参数可以是类型，而函数做不到
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10,int);
//	return 0;
//}

//#undef:移除一个宏定义
//#define MAX 100
//int main()
//{
//	printf("%d\n",MAX);
//#undef MAX
//	printf("%d\n",MAX);
//	return 0;
//}

//命令行定义
//部分C的编译器提供一种能力，允许在命令行中定义符号，用于启动编译过程。

//条件编译

//#define DEBUG  //DEBUG可以是零也可以是1，也可以不给值，只要进行了定义，L206就为真
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG  //如果定义了DEBUG
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#ifndef DEBUG
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}

//#define x 1
//int main()
//{
//#if	  x==1
//		printf("%d\n",x);
//#elif x==2
//		printf("%d\n",x);
//#else
//		printf("%d\n",x);
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)	//等价于#ifdef DEBUG
//	printf("hello there\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if !defined(DEBUG)
//	printf("hello there\n");
//#endif
//	return 0;
//}

//#include
//#include "" 查找策略为：现在源文件所在目录下查找，若找不到，再在编译器安装目录下查找(....\VC\inlucde)
//#incldue <> 查找策略为：直接在编译器安装目录下查找

//offsetof的实现
//#include <stddef.h>
//#define OFFSETOF(struct_name,member_name) (int)(&(((struct_name*)0)->member_name))
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",OFFSETOF(struct S,c1));
//	printf("%d\n",OFFSETOF(struct S,a));
//	printf("%d\n",OFFSETOF(struct S,c2));
//	return 0;
//}