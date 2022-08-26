#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****指向函数指针数组的指针*****/

//int main()
//{
//	int (*pf)(int,int);							//函数指针
//	int (*pfArr[4])(int,int);					//pfArr是一个函数指针数组
//	int (*(*ppfArr)[4])(int,int) = &pfArr;		//ppFarr是一个指向函数指针数组的指针
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组每个元素的类型是一个函数指针：int(*)(int,int)
//	return 0;
//}

/*****回调函数*****/

//void print(char *p)		//print为回调函数
//{
//	printf("%s",p);
//}
//void test(void (*p)(char *))
//{
//	printf("test\n");
//	p("hello there\n");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;		//非法操作，void* 类型的指针不能进行解引用，因为指针指向的数据类型确定了解引用时操作字节的大小，而void为空
//	p++;		//非法操作，void* 类型的指针不能进行加减操作，因为指针指向的数据类型确定了加减时的步长，而void为空
//	return 0;
//}

/*****利用回调函数仿照qsort函数进行数据排序*****/

//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2));		//排序任意类型数据，仿qsort
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//int cmp_int(const void* e1,const void* e2)				//整型数据比较
//{
//	return *(int *)e1 - *(int *)e2;
//}
//int cmp_float(const void* e1,const void* e2)				//浮点型数据比较
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int cmp_stu_by_age(const void* e1,const void* e2)			//结构体数据比较
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1,const void* e2)		//结构体数据比较
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test_1()		//测试整型数据排序
//{
//	int arr[] = {9,8,7,6,5,4,1,2,3};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void test_2()		//测试浮点型数据排序
//{
//	float arr[] = {9.4,8.6,7.2,6.5,5.7,4.1,1.0,2.2,3.3};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_float);
//	for(i=0;i<sz;i++)
//	{
//		printf("%1f ",arr[i]);
//	}
//}
//void test_3()		//测试结构体数据排序
//{
//	struct stu student[3] = {{"zhangshan",24},{"lishi",21},{"wangwu",22}};
//	int sz = sizeof(student)/sizeof(student[0]);
//	int i = 0;
//	bubble_sort(student,sz,sizeof(student[0]),cmp_stu_by_age);
//	for(i=0;i<sz;i++)
//	{
//		printf("%s ",student[i].name);
//	}
//}
//void test_4()		//测试结构体数据排序
//{
//	struct stu student[3] = {{"zhangshan",24},{"lishi",21},{"wangwu",22}};
//	int sz = sizeof(student)/sizeof(student[0]);
//	int i = 0;
//	bubble_sort(student,sz,sizeof(student[0]),cmp_stu_by_name);
//	for(i=0;i<sz;i++)
//	{
//		printf("%s ",student[i].name);
//	}
//}
//void swap(char* buf1,char* buf2,int width)		//将未知类型的两个数据按字节进行交换
//{
//	char temp;
//	int i = 0;
//	for(i=0;i<width;i++)
//	{
//		temp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = temp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))		//仿qsort函数
//{
//	int i = 0;
//	int j = 0;
//	const void* temp = NULL;
//	for(i=0;i<sz-1;i++)				//冒泡排序趟数 
//	{
//		for(j=0;j<sz-1-i;j++)		//每一趟比较的对数
//		{
//			if((cmp((((char*)base)+(width*j)),(((char*)base)+(width*(j+1)))))>0)		//base转为(char*)? 
//			//若将base定义为int，进行加操作后再转为const void*，无法进行解引用
//			{
//				swap((((char*)base)+(width*j)),(((char*)base)+(width*(j+1))),width);
//			}
//		}
//	}
//}
//int main()
//{
//	test_1();
//	//test_2();
//	//test_3();
//	//test_4();
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int *p = &a;
//	printf("%p\n",p+1);
//	printf("%p\n",(int *)(((int)p)+4));
//	printf("%p\n",p);
//	printf("%d\n",(int)p);
//	return 0;
//}

/*****数组名的含义*****/

//int main()
//{
//	//一维整型数组
//	//数组名为首元素地址，有且仅有如下两种情况例外：
//	//1.sizeof(数组名) - 数组名表示整个数组
//	//2.&数组名 - 数组名表示整个数组
//	int a[] = {1,2,3,4};
//	//int (*p)[4] = &a;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a+0));		//括号内不是数组名，故a+0为首元素地址
//	printf("%d\n",sizeof(*a));
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));		//数组的地址是一个地址，故大小为4或8
//	printf("%d\n",sizeof(*&a));
//	printf("%d\n",sizeof(&a + 1));		
//	//指针p+1中的1表示为1个步长而非一个单位的字节，步长的长度取决与p指向的数据类型，此处&a为整个数组的地址，故步长为整个数组的长度，但(p+1)最终是一个地址，故其大小为4或8
//	printf("%d\n",sizeof(&a[0]));	//只要是地址，大小就是4或8
//	printf("%d\n",sizeof(&a[0]+1));
//
//	printf("\n");
//
//	//字符数组
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr + 0));		//求的是一个地址的大小，为4或8，与数据类型无关
//	printf("%d\n",sizeof(*arr));
//	printf("%d\n",sizeof(arr[1]));
//	printf("%d\n",sizeof(&arr));
//	printf("%d\n",sizeof(&arr + 1));
//	printf("%d\n",sizeof(&arr[0] + 1));
//
//	printf("\n");
//
//	char arr1[] = {'a','b','c','d','e','f'};
//	printf("%d\n",strlen(arr1));		//随机值，读取到'\0'结束
//	printf("%d\n",strlen(arr1+0));		//随机值
//	//printf("%d\n",strlen(*arr1));		//非法传值，strlen的参数为一个地址，此处传的是一个'a',实际是在访问地址为97('a'的ASCALL码)的内存
//	//printf("%d\n",strlen(arr1[1]));	//非法传值，strlen的参数为一个地址，此处传的是一个'b'
//	//printf("%d\n",strlen(&arr1));		//随机值，传的是数组地址，数组地址也是从'a'的地址开始的
//	//printf("%d\n",strlen(&arr1+1));	//随机值，与上一个随机值的差值为6
//	printf("%d\n",strlen(&arr1[0]+1));	//随机值
//
//	printf("\n");
//
//	char arr2[] = "abcdef";				//字符串末尾默认为'\0'
//	printf("%d\n",sizeof(arr2));		//7,sizeof(数组名):表示求整个数组的大小
//	printf("%d\n",sizeof(arr2+0));		//4
//	printf("%d\n",sizeof(*arr2));		//1
//	printf("%d\n",sizeof(arr2[1]));		//1
//	printf("%d\n",sizeof(&arr2));		//4
//	printf("%d\n",sizeof(&arr2+1));		//4
//	printf("%d\n",sizeof(&arr2[0]+1));	//4
//
//	printf("\n");
//
//	char arr3[] = "abcdef";
//	printf("%d\n",strlen(arr3));		//6,到'\0'终止，'\0'不算
//	printf("%d\n",strlen(arr3+0));		//6
//	//printf("%d\n",strlen(*arr3));		//非法传值
//	//printf("%d\n",strlen(arr3[1]));	//非法传值
//	//printf("%d\n",strlen(&arr3));		//6
//	//printf("%d\n",strlen(&arr3+1));	//随机值
//	printf("%d\n",strlen(&arr3[0]+1));	//5
//
//	printf("\n");
//
//	char* p = "abcedf";  
//	printf("%d\n",sizeof(p));			//4	
//	printf("%d\n",sizeof(p+1));			//4
//	printf("%d\n",sizeof(*p));			//1
//	printf("%d\n",sizeof(p[0]));		//1
//	printf("%d\n",sizeof(&p));			//4
//	printf("%d\n",sizeof(&p+1));		//4
//	printf("%d\n",sizeof(&p[0]+1));		//4
//
//	printf("\n");
//
//	char* pp = "abcedf";
//	printf("%d\n",strlen(pp));			//6
//	printf("%d\n",strlen(pp+1));		//5
//	//printf("%d\n",strlen(*pp));		//非法传值
//	//printf("%d\n",strlen(pp[0]));		//非法传值
//	//printf("%d\n",strlen(&pp));		//随机
//	//printf("%d\n",strlen(&pp+1));		//随机
//	printf("%d\n",strlen(&pp[0]+1));	//5
//	
//	printf("\n");
//
//	//二维数组
//	int b[3][4] = {0};
//	printf("%d\n",sizeof(b));			//12*4
//	printf("%d\n",sizeof(b[0][0]));		//1*4
//	printf("%d\n",sizeof(b[0]));		//4*4  b[0]为第一行的数组名，sizeof(b[0]),把数组名放在sizeof中即为求该数组的大小
//	printf("%d\n",sizeof(b[0]+1));		//4  b[0]为第一行的数组名，除了sizeof(数组名)和&数组名外，b[0]即为第一行第一个元素的地址
//	printf("%d\n",sizeof(*(b[0]+1)));	//4  第一行第二个元素的值
//	printf("%d\n",sizeof(b+1));			//4
//	printf("%d\n",sizeof(*(b+1)));		//4*4
//	printf("%d\n",sizeof(&b[0]+1));		//4
//	printf("%d\n",sizeof(*(&b[0]+1)));	//4*4	
//	printf("%d\n",sizeof(*b));			//4*4
//	printf("%d\n",sizeof(b[3]));		//sizeof()并不会去访问b[3],只是根据其类型算出大小，故即使b[3]不存在也没有影响，sizeof(b[3])等价于sizeof(b[0])
//		
//	printf("\n");
//
//	return 0;
//}

/*****指针例题*****/

//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int* p = (int*)(&a+1);
//	printf("%d %d\n",*(a+1),*(p-1));
//	return 0;
//}

//struct test
//{
//	int Num;
//	char* pcname;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{	
//	p = (struct test*)0x100000;
//	printf("%p\n",p);
//	printf("%p\n",p+0x1);
//	printf("%p\n",(unsigned long)p+0x1);
//	printf("%p\n",(unsigned int*)p+0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int *)(&a+1);			//将数组a的地址加一相当与便宜了16个字节
//	int *ptr2 = (int *)((int)a+1);		//将地址强转为int后加一相当与偏移了一个字节
//	printf("%x  %x\n",ptr1[-1],*ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};		//逗号表达式,故二位数组a[0][0]为1，a[0][1]为3，a[1][0]为5，其余默认填充0
//	int* p;
//	p = a[0];
//	printf("%d\n",p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];		//？
//	p = a;
//	printf("%p  %d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);		//FFFFFFFC和-4
//	return 0;
//}

//int main()
//{
//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//int* p = arr;		//此时*(p+2)==p[2]==*(arr+2)==arr[2]
//return 0;
//}

//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);
//	int* ptr2 = (int*)(*(aa+1));		//aa+1是第二行的地址等价于&(第二行数组名)，故*（aa+1）为第二行数组名，即为第二行首元素的地址
//	printf("%d  %d\n",*(ptr1-1),*(ptr2-1));
//	return 0;
//}

//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char** pa = a;
//	pa++;
//	printf("%s\n",*pa);
//	return 0;
//}

//struct st
//{
//	int a;
//	int b;
//	int c;
//};
//int main()
//{
//	struct st str = {1,2,3};
//	struct st* p = &str;
//	printf("%p\n",p);
//	printf("%p\n",p+1);
//	//printf("%d\n",*((int*)p+1));
//	return 0;
//}
