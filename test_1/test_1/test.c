#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float a = 5.56f;
//	float b = 2.38f;
//	float c = a/b;  //浮点数相除不会舍位
//	printf("%.2f\n",c);
//	return ;
//}

//int main()
//{
//	int i = 5;
//	while(i--)
//	if(i==3||i==4)
//		printf("hello there\n");  //if和其控制的语句块可以看作是一条语句，由while控制
//
//	return 0;
//}


//enum a_num
//{
//	a ,
//	b ,
//	c
//};
//enum b_num
//{
//	d ,
//	e ,
//	f
//};
////不同枚举中的元素名称必须互不相同
//int main()
//{
//	enum a_num i = a;
//	
//	return 0;
//}

//int add(int,int);
//
//int main()
//{
//	char a = 5;
//	char b = 6;
//	int c = add(a,b);  //char和float类型的变量作为参数时会被自动提升为int和dluble
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[5] = "efgh";
//	int i,j = 0; 
//	char temp;
//	for(i=0,j=0;arr1[i]!='\0'&&arr2[j]!='\0';i++,j++)
//		temp = arr1[i],arr1[i] = arr2[j],arr2[j]=temp;  //逗号表达式
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	return 0;
//}


//int main()
//{
//	int i,j = 0;
//	for(i=0;i<5;i++)
//		for(j=0;j<5;j++)
//		{
//			if(j==3)
//				goto jumploop;
//			else
//				printf("%d\n",j);
//		}
//jumploop:  //标号,不要分号
//		printf("hello there\n");
//	return 0;
//}

int main()
{
	int i,j = 0;
	int arr[][5] = {{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}}; 
	int *p1 = arr[0];  //指针赋值表达式两边可以同时解引用，但不能同时取地址
	int (*p2)[5] = arr;
	int (*p3)[5] = &arr[0];
	/*printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	printf("%p\n",arr[0]);*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",(p2)[i][j]);
		}
		printf("\n");
	}
	printf("****************************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",(p3)[i][j]);
		}
		printf("\n");
	}
	printf("****************************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",(p1)[(i*5)+j]);
		}
		printf("\n");
	}
	printf("****************************\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%3d ",(*p3)[(i*5)+j]);  //p3 = &arr[0] 等号两边同时解引用，*p3 = arr[0]
		}
		printf("\n");
	}
	
	return 0;
}