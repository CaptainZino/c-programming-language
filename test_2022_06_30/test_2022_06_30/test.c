#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* p = "abcdef";		//�����ַ���Ӧ��ָ��const���ε�ָ�룺const char* p = "abcdef";
//	*p = 'W';		//�˲������Ϸ�
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
//		printf("*****3*****\n");		//�����ַ����޷����޸ģ�����ͬ���ַ������ڴ���ֻ��һ��,����p1��p2ָ��ͬһ���׵�ַ
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
//	int* arr[5] = {arr1,arr2,arr3,arr4,arr5};		//ָ������
//	int* (*parr)[5] = &arr;		//����ָ�룬ָ��ָ������arr
//	int i,j = 0;
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",(*parr)[i][j]);		//����֤  //ͨ������ָ��parrȡֵ�ķ�ʽ�����ǣ�(*parr)[i][j]Ҳ�����ǣ�*((*((*parr)+i))+j)
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

//int(*parr[10])[5]   parrΪһ�����飬��������ʮ��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ������������Ԫ�أ�ÿ��Ԫ�ص�����Ϊint 


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
//	test(arr);			//��ά���鴫��
//	test1(arr);			//��ά���鴫���п���ʡ��
//	//test2(arr);		//��ά���鴫���в���ʡ��
//	//test3(arr);		//��ά���鴫����Ϊ��ַʱ��Ϊ���еĵ�ַ
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
//	test(arr);		//����ָ�봫�ε��������
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void (*pfun)(char*) = print;		//����ָ��
//	(*pfun)("hello world");
//	(pfun)("hello world");		//������ָ����Բ�������
//	//*pfun("hello world");     //�˵��÷�ʽ�Ƿ�,pfun���Ⱥ�()���
//	return 0;
//}


/*****���ں���ָ��(Fallible)*****/

// (*(void(*)()0))()  //��0ǿ��ת���ɣ�void(*)()����ָ�����ͣ���ʱ0Ϊһ��������ַ��Ȼ����н�����
// void(*signal(int,void(*)(int)))(int)  //����һ������ֵΪ����ָ�룺void(*)(int)�ĺ���signal�ĺ�������
//void(*)(int) signal(int,void(*)(int))  //����������ʽ���󣬲��պ���ָ���������ʽ��������Ҫ��(*)��ϣ���ȷ������ʽ����
//����ֵΪ����ָ��ĺ����ĺ������������£�
//typedef void(*pfun_t)(int);  //����д�ɣ�typedef void(*)(int) pfun_t
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
//void calc(int(*p)(int,int))		//�ص�����
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d",&x,&y);
//	printf("%d\n",p(x,y));
//}
//int main()
//{
//	//int(*parr[])(int,int) = {0,add,sub,mul,div};		//����ָ������
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
//	char* (*pf)(char *,const char*) = my_strcpy;		//����ָ��
//	char* (*pfarr[4])(char *,const char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};		//����ָ������
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
//	printf("%p\n",arr+1);		//arrΪ����{1��2��3��4��5}�ĵ�ַ��arr[0]Ϊ1�ĵ�ַ(Fallible)
//	return 0;
//}

//typedef int(*pfun)(int,int);		//�ض���pfunΪ����ָ��int(*)(int,int)
//int add(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	pfun p = add;
//	pfun pp = &add;		//���ַ�ʽ����ȡ��������ַ
//	printf("%d\n",p(2,3));
//	printf("%d\n",pp(4,3));
//	printf("%p\n",p);
//	printf("%p\n",pp);
//	return 0;
//}