#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define NUM 5
//int add(int x ,int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	/*int a=10;
//	int b=22;
//	int sum=add(a,b);
//	printf("%d\n",sum);
//	return 0;*/
//
//	/*int a=1;
//	a<<=1;
//	printf("%d\n",a);*/
//
//	int a = 0;
//	a = ~a;
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	/*int a =0;
//	int b =0;
//	a = !b;
//	printf("%d\n",a);*/
//
//	int a = 4194304;
//	int b = a>>22;
//	printf("%d\n",b);
//	return 0;
//}

//int main ()
//
//{	
//	int data[256];
//	int *num1 = data;
//	int num2 = 1;
//	int t=10;
//	int x=0;
//	//scanf("%d",&num1);
//	while (t)
//	{
//		if(t==10||t==9)
//		{
//			*num1 = 1;
//		}
//		else
//		{
//			*num1 = 1;
//		}
//		switch(*num1)
//		{	case 1:
//			switch(num2)
//			{
//			case 1:
//				{
//					num2 = 2;
//					printf("*****1*****\n");
//					break;
//				}
//			case 2:
//				{
//					num2 = 3;
//					x = *num1;
//					printf("*****2*****\n");
//					break;
//				}
//			case 3:
//				{
//					if(x==*num1)
//					printf("*****3*****\n");	
//					else
//					{
//						printf("*****4*****\n");
//					}
//					break;
//				}
//				
//			}
//			num1++;
//			break;
//		case 2:
//			printf("*****error*****\n");
//			break;
//		default :
//			break;
//		}
//		t--;
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char i = 125;
//	int t = 0;
//	t = i+2;
//	printf("%d\n",t);
//	return 0;
//}

//int main()
//{
//	/*int *test = (int *)malloc(sizeof(int));
//	*test = 3;
//	printf("%d\n",*test);*/
//	int a = -1;
//	unsigned int b = 0;
//	char s[32];
//	b = a;
//	itoa(b,s,2);  //�Զ����ƽ������
//	printf("%s\n",s);
//	return 0;
//}

//int main()
//{	
//	int arr[10] = {0};
//	int *p = arr;
//	for (int i=0;i<10;i++)
//	{
//		*(p+i) = 1;
//	}
//	//char *pc = &a;
//	return 0;
//}
//

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;  //ָ���ȥָ��Ϊ����֮��Ԫ�ظ���
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int num = my_strlen(arr);
//	printf("%d\n",num);
//}

//int main()
//{
//	int arr[NUM];
//	int* p = NULL;
//	for(p=&arr[NUM];p>&arr[0];)
//	{
//		*--p = 1;
//		printf("%d ",*p);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[NUM];
//	int* p = NULL;		//ָ���ʼ�����ȼ���int* p = 0;  //Fallible
//	for(p=&arr[NUM-1];p>=&arr[0];p--)
//	{
//		*p = 1; //c��������ָ������Ԫ�ص�ָ���ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ����бȽϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//		printf("%d ",*p);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[10] = {0};
//	printf("%p\n",arr);  //��Ԫ�ص�ֵ
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);//��Ԫ�ص�ֵ
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);//��������ĵ�ַ
//	printf("%p\n",&arr+1);
//	//&arr����ʱarr����ʾ��Ԫ�ص�ַ������ʾ��������
//	//sizeof(arr):��ʱarr����ʾ��Ԫ�ص�ַ������ʾ��������
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int* arr[3] = {&a,&b,&c};//ָ������
//	for(int i=0;i<3;i++)
//	{
//		printf("%d\n",*arr[i]);
//	}
//}


//int main()
//{	
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;  //����ָ��
//	int* t = arr;
//	int* x = &arr[0];
//	for(int i=0;i<10;i++)
//	{
//		printf("*p: %d\n",(*p)[i]);
//	}
//	printf("*********************************\n");
//	while(t<=&arr[9])
//	{
//		printf("*t: %d\n",*t);
//		t++;
//	}
//	printf("*********************************\n");
//		while(x<=&arr[9])
//	{
//		printf("*x: %d\n",*x);
//		x++;
//	}
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n",str);
//}
//
//int main()
//{
//	void(*p)(char*) = print; //����ָ��
//	(*p)("abcdefg");
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main ()
//{
//	int* p=test();
//	printf("%d\n",*p);   //�˶δ�������aΪtest�ڶ���ľֲ��������������������test{}�ڣ�����main��test()���ص���һ�����ֵ
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(int *));
//	printf("%d\n",sizeof(char *));
//	printf("%d\n",sizeof(double *));
//	return 0;
//}