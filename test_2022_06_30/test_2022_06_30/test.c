#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* p = "abcdef";		//常量字符串应该指向const修饰的指针：const char* p = "abcdef";
//	*p = 'W';		//此操作不合法
//	printf("%s\n",p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if(arr1==arr2)
//	{
//		printf("*****1*****\n");
//	}
//	else
//	{
//		printf("*****2*****\n");
//	}
//	if(p1==p2)
//	{
//		printf("*****3*****\n");		//常量字符串无法被修改，故相同的字符串在内存中只有一份,所有p1和p2指向同一个首地址
//	}
//	else
//	{
//		printf("*****4*****\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1,arr2,arr3};
//	int i,j = 0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int arr4[] = {4,5,6,7,8};
//	int arr5[] = {5,6,7,8,9};
//	int* arr[5] = {arr1,arr2,arr3,arr4,arr5};		//指针数组
//	int* (*parr)[5] = &arr;		//数组指针，指向指针数组arr
//	int i,j = 0;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",(*parr)[i][j]);		//待验证  //通过数组指针parr取值的方式可以是：(*parr)[i][j]也可以是：*((*((*parr)+i))+j)
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",*((*((*parr)+i))+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//void print1(int arr[3][5],int x,int y)
//{
//	int i,j = 0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*parr)[5],int x,int y)
//{	
//	int i,j = 0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",parr[i][j]);		//(*(parr+i))[j]  //(*(parr[i]))+j  //*((*(parr+i)+j))  //parr[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{	
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr,3,5);
//	printf("*********\n");
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* parr = arr;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",parr[i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(parr+i));
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(arr+i));		//arr[i]==parr[i]==*(arr+i)==*(parr+i)
//	}
//	printf("\n");
//	return 0;
//}

//int(*parr[10])[5]   parr为一个数组，该数组有十个元素，每个元素是一个数组指针，该数组指针指向的数组有五个元素，每个元素的类型为int 


//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[3][])		//err
////{}
////void test3(int *arr)		//err	
////{}
//void test4(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);			//二维数组传参
//	test1(arr);			//二维数组传参行可以省略
//	//test2(arr);		//二维数组传参列不能省略
//	//test3(arr);		//二维数组传参作为地址时，为首行的地址
//	test4(arr);
//	return 0;
//}

//void test(int** p)
//{}
//int main()
//{
//	int a = 10;
//	int* arr[10];
//	int* p = &a;
//	int** pp = &p;
//	test(&p);
//	test(pp);
//	test(arr);		//二级指针传参的三种情况
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*pfun)(char*) = print;		//函数指针
//	(*pfun)("hello world");
//	(pfun)("hello world");		//调函数指针可以不解引用
//	//*pfun("hello world");     //此调用方式非法,pfun会先和()结合
//	return 0;
//}


/*****关于函数指针(Fallible)*****/

// (*(void(*)()0))()  //将0强制转换成：void(*)()函数指针类型，此时0为一个函数地址；然后进行解引用
// void(*signal(int,void(*)(int)))(int)  //进行一个返回值为函数指针：void(*)(int)的函数signal的函数声明
//void(*)(int) signal(int,void(*)(int))  //此种声明方式有误，参照函数指针的声明方式，函数名要和(*)结合，正确声明方式如上
//返回值为函数指针的函数的函数声明简化如下：
//typedef void(*pfun_t)(int);  //不能写成：typedef void(*)(int) pfun_t
//pfun_t signal(int,pfun_t);


//int add(int x,int y)
//{
//	return x+y;
//}
//int sub(int x,int y)
//{
//	return x-y;
//}
//int mul(int x,int y)
//{
//	return x*y;
//}
//int div(int x,int y)
//{
//	return x/y;
//}
//void calc(int(*p)(int,int))		//回调函数
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d",&x,&y);
//	printf("%d\n",p(x,y));
//}
//int main()
//{
//	//int(*parr[])(int,int) = {0,add,sub,mul,div};		//函数指针数组
//	char input;
//	scanf("%c",&input);
//	do
//	{
//		switch((input))
//		{
//		case 43:
//			calc(add);
//			break;
//		case 45:
//			calc(sub);
//			break;
//		case 42:
//			calc(mul);
//			break;
//		case 47:
//			calc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("");
//			break;
//		}
//				
//	}
//	while(input);
//	return 0;
//}

//char* my_strcpy(char* dest,const char* src)
//{
//	//return 0;
//}
//int main()
//{
//	char* (*pf)(char *,const char*) = my_strcpy;		//函数指针
//	char* (*pfarr[4])(char *,const char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};		//函数指针数组
//	return 0;
//}

//int main()
//{
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
//	int (*p)[3][5] = &arr;
//	int i,j = 0;
//	for(i=0;i<3;i++)
//	{
//		//for(j=0;j<5;j++)
//		//{
//		//	printf("%d ",((*p)[i][j]));		//*(*((*p)+i)+j)
//		//}
//		//printf("\n");
//	}
//	printf("%p\n",&((*p)[0]));
//	printf("%p\n",&((*p)[0])+1);
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);		//arr为数组{1，2，3，4，5}的地址，arr[0]为1的地址(Fallible)
//	return 0;
//}

//typedef int(*pfun)(int,int);		//重定义pfun为函数指针int(*)(int,int)
//int add(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	pfun p = add;
//	pfun pp = &add;		//两种方式均可取到函数地址
//	printf("%d\n",p(2,3));
//	printf("%d\n",pp(4,3));
//	printf("%p\n",p);
//	printf("%p\n",pp);
//	return 0;
//}