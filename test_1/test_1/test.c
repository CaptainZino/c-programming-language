#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float a = 5.56f;
//	float b = 2.38f;
//	float c = a/b;  //���������������λ
//	printf("%.2f\n",c);
//	return ;
//}

//int main()
//{
//	int i = 5;
//	while(i--)
//	if(i==3||i==4)
//		printf("hello there\n");  //if������Ƶ�������Կ�����һ����䣬��while����
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
////��ͬö���е�Ԫ�����Ʊ��뻥����ͬ
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
//	int c = add(a,b);  //char��float���͵ı�����Ϊ����ʱ�ᱻ�Զ�����Ϊint��dluble
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
//		temp = arr1[i],arr1[i] = arr2[j],arr2[j]=temp;  //���ű��ʽ
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
//jumploop:  //���,��Ҫ�ֺ�
//		printf("hello there\n");
//	return 0;
//}

int main()
{
	int i,j = 0;
	int arr[][5] = {{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}}; 
	int *p1 = arr[0];  //ָ�븳ֵ���ʽ���߿���ͬʱ�����ã�������ͬʱȡ��ַ
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
			printf("%3d ",(*p3)[(i*5)+j]);  //p3 = &arr[0] �Ⱥ�����ͬʱ�����ã�*p3 = arr[0]
		}
		printf("\n");
	}
	
	return 0;
}