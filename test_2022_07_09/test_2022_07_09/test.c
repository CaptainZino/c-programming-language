#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*****结构体、枚举、联合体*****/

//struct
//{
//	int a;
//	char c;
//}sa;		//匿名结构体
//struct
//{
//	int a;
//	char c;
//}* psa,saa;
//
//int main()
//{
//	psa = &saa;
//	//psa = &sa;		//虽然两个匿名结构体成员变量一致，但编译器会将其看作两个不同的结构体
//	return 0;
//}

//结构体的自引用

//struct Node
//{
//	int data;
//	//struct Node n;		//结构体里不能包含本身类型的结构体  //无法计算大小，故无法申请空间
//};

//struct Node
//{
//	int data;
//	struct Node*  next;
//};

/*typedef struct Node
{
	int data;
	struct Node*  next;
}Node;	*/	//简化struct Node为Node

/*typedef struct
{
	int data;
	Node1*  next;
}Node1;	*/	//此写法有误  //Node* next在重定义Node之前

//int main()
//{
//	struct Node n1;
//	Node1 n2;
//	return 0;
//}

//结构体内存对齐

//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//struct S2
//{
//	char a;
//	char b;
//	int c;
//};
//
//int main()
//{
//	struct S1 s1 = {0};
//	struct S2 s2 = {0};
//	printf("%d\n",sizeof(s1));
//	//第一个成员变量在结构体变量偏移量为0的地址处
//	//其他成员变量要对其到某个数字(对齐数)的整数倍的地址处
//	//对齐数=编译器默认的一个对齐数与该成员大小的较小值
//	//结构体总大小为最大对齐数(每个成员变量都有一个对齐数(为该成员变量大小与默认对齐数的较小值))的整数倍
//	//vs的默认对齐数为8，假设s1存放的起始地址为0，则a存放在第一个字节，b存放在第四到第八个字节，c存放在第九个字节，然后补三个字节，凑为最大对齐数4的整数倍
//	//gcc没有默认对齐数
//	printf("%d\n",sizeof(s2));
//	return 0;
//}

struct s3
{
	double d;
	char c;
	int i;
};  //16

struct s4
{
	char c1;
	struct s3 s3;
	double d;
	char c;
};
int main()
{
	struct s4 s4;
	//如果嵌套了结构体，嵌套的结构体对其到自己的最大对齐数(s3的最大对齐数为8)的整数倍处
	//结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍
	printf("%d\n",sizeof(s4));
	return 0;
}

//内存对齐的原因：
//平台原因：某些硬件平台并不能任意访问任意地址的任意数据，只能在某些地址处取某些特定类型的数据，否则会抛出硬件异常
//性能原因：访问未对齐的内存，处理器需要作两次访问；而对齐的内存仅需一次访问
//以空间换取时间
//创建结构体的时候应尽量让占用空间小的成员集中在一起

//#pragma pack(1)		//设置默认对齐数为1
//struct S
//{
//	char a;
//	double i;
//};
//#pragma pack()		//取消设置的默认对齐数
//
//struct A
//{
//	char a;
//	double i;
//};
//
//int main()
//{
//	struct S s;
//	struct A a;
//	printf("%d  %d\n",sizeof(s),sizeof(a));
//	return 0;
//}

//#include <stddef.h>		//offsetof头文件
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();		//计算结构体成员相对与结构体的偏移量  //offsetof为宏
//	printf("%d\n",offsetof(struct S,c));
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//void Init(struct S* p)
//{
//	p->c = 'a';
//	p->i = 100;
//	p->d = 3.14;
//}
//void Print1(struct S s)
//{
//	printf("%c %d %lf\n",s.c,s.i,s.d);
//}
//void Print2(const struct S* p)		//*p只读
//{
//	printf("%c %d %lf\n",p->c,p->i,p->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//位段
//位段的成员必须是各种整型数(int、unsigned int、signed int、char)
//位段的成员名后面有一个冒号和一个数字
//位段不跨平台，可移植性差

//struct A		//位段  //位为二进制位
//{
//	int a:2;	//a只占两个比特位
//	int b:5;
//	int c:10;
//	int d:30;	//变量为int类型时冒号后的数字不能大于32，为char类型时冒号后的数字不能大于8
//};
////位段以四个字节(int)或一个字节(char)进行空间开辟
//
//int main()
//{
//	struct A a;
//	printf("%d\n",sizeof(a));		//8个字节  //内存会分配两次四个字节的空间，前四个给a、b、c，后四个给d
//	return 0;
//}

//位段结构体中含有不同类型

//struct A		//位段  //位为二进制位
//{
//	char a:2;	//a只占两个比特位
//	int b:5;	//分配一个字节存储a后要进行偏移，然后重新分配空间来存储整型的b、c、d
//	int c:10;
//	int d:30;	//变量为int类型时冒号后的数字不能大于32，为char类型时冒号后的数字不能大于8
//};
////位段以四个字节(int)或一个字节(char)进行空间开辟
//
//int main()
//{
//	struct A a;
//	printf("%d\n",sizeof(a));
//	return 0;
//}

//struct A
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//
//int main()
//{
//	struct A s = {0};
//	s.a = 10;		//a只有三个比特位进行存储，会发生截断
//	s.b = 20;		//b只有四个比特位进行存储，会发生截断
//	s.c = 3;
//	s.d = 4;
//	printf("%d  %d  %d  %d\n",s.a ,s.b,s.c,s.d);
//	return 0;
//}
	

//枚举

//enum Color
//{
//	RED,			//0
//	GREEN = 5,		//注意为逗号
//	BLUE			//6
//};
//
//int main()
//{	
//	enum Color c = GREEN;
//	enum Color c1 = BLUE;
//	//enum Color c1 = 5;		//此赋值操作非法
//	printf("%d\n",sizeof(c));	//枚举类型的成员变量为int类型
//	printf("%d\n",c);
//	printf("%d\n",c1);
//	return 0;
//}

//联合(共用体)
//成员变量公用同一块空间
//联合体的大小至少为最大的成员变量的大小
//当最大成员变量的大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
//成员变量不能同时使用

//union Em
//{
//	char c;
//	int i;
//};
//int main()
//{
//
//	union Em U;
//	printf("%d\n",sizeof(U));
//	printf("%p\n",&(U.c));
//	printf("%p\n",&(U.i));
//	printf("%p\n",&U);
//	return 0;
//}

//判断大小端字节序

//int main()
//{
//	int a = 1;
//	if(1==(*(char*)(&a)))
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//	return 0;
//}

//union Em
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Em U;
//	U.i = 1;
//	if(U.c==1)
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//	return 0;
//}

//union Un
//{
//	int a;				//对齐数为4
//	char arr[5];		//以char的大小来算对齐数而不是数组的大小  //对齐数为1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));		//char arr[5]的大小不是4的整数倍，故对齐到4的整数倍
//	return 0;
//}
