#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*****ָ����ָ�������ָ��*****/

//int main()
//{
//	int (*pf)(int,int);							//����ָ��
//	int (*pfArr[4])(int,int);					//pfArr��һ������ָ������
//	int (*(*ppfArr)[4])(int,int) = &pfArr;		//ppFarr��һ��ָ����ָ�������ָ��
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ�룺int(*)(int,int)
//	return 0;
//}

/*****�ص�����*****/

//void print(char *p)		//printΪ�ص�����
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
//	*p = 0;		//�Ƿ�������void* ���͵�ָ�벻�ܽ��н����ã���Ϊָ��ָ�����������ȷ���˽�����ʱ�����ֽڵĴ�С����voidΪ��
//	p++;		//�Ƿ�������void* ���͵�ָ�벻�ܽ��мӼ���������Ϊָ��ָ�����������ȷ���˼Ӽ�ʱ�Ĳ�������voidΪ��
//	return 0;
//}

/*****���ûص���������qsort����������������*****/

//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2));		//���������������ݣ���qsort
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//int cmp_int(const void* e1,const void* e2)				//�������ݱȽ�
//{
//	return *(int *)e1 - *(int *)e2;
//}
//int cmp_float(const void* e1,const void* e2)				//���������ݱȽ�
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int cmp_stu_by_age(const void* e1,const void* e2)			//�ṹ�����ݱȽ�
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int cmp_stu_by_name(const void* e1,const void* e2)		//�ṹ�����ݱȽ�
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test_1()		//����������������
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
//void test_2()		//���Ը�������������
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
//void test_3()		//���Խṹ����������
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
//void test_4()		//���Խṹ����������
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
//void swap(char* buf1,char* buf2,int width)		//��δ֪���͵��������ݰ��ֽڽ��н���
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
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))		//��qsort����
//{
//	int i = 0;
//	int j = 0;
//	const void* temp = NULL;
//	for(i=0;i<sz-1;i++)				//ð���������� 
//	{
//		for(j=0;j<sz-1-i;j++)		//ÿһ�˱ȽϵĶ���
//		{
//			if((cmp((((char*)base)+(width*j)),(((char*)base)+(width*(j+1)))))>0)		//baseתΪ(char*)? 
//			//����base����Ϊint�����мӲ�������תΪconst void*���޷����н�����
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

/*****�������ĺ���*****/

//int main()
//{
//	//һά��������
//	//������Ϊ��Ԫ�ص�ַ�����ҽ�����������������⣺
//	//1.sizeof(������) - ��������ʾ��������
//	//2.&������ - ��������ʾ��������
//	int a[] = {1,2,3,4};
//	//int (*p)[4] = &a;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(a+0));		//�����ڲ�������������a+0Ϊ��Ԫ�ص�ַ
//	printf("%d\n",sizeof(*a));
//	printf("%d\n",sizeof(a+1));
//	printf("%d\n",sizeof(a[1]));
//	printf("%d\n",sizeof(&a));		//����ĵ�ַ��һ����ַ���ʴ�СΪ4��8
//	printf("%d\n",sizeof(*&a));
//	printf("%d\n",sizeof(&a + 1));		
//	//ָ��p+1�е�1��ʾΪ1����������һ����λ���ֽڣ������ĳ���ȡ����pָ����������ͣ��˴�&aΪ��������ĵ�ַ���ʲ���Ϊ��������ĳ��ȣ���(p+1)������һ����ַ�������СΪ4��8
//	printf("%d\n",sizeof(&a[0]));	//ֻҪ�ǵ�ַ����С����4��8
//	printf("%d\n",sizeof(&a[0]+1));
//
//	printf("\n");
//
//	//�ַ�����
//	char arr[] = {'a','b','c','d','e','f'};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(arr + 0));		//�����һ����ַ�Ĵ�С��Ϊ4��8�������������޹�
//	printf("%d\n",sizeof(*arr));
//	printf("%d\n",sizeof(arr[1]));
//	printf("%d\n",sizeof(&arr));
//	printf("%d\n",sizeof(&arr + 1));
//	printf("%d\n",sizeof(&arr[0] + 1));
//
//	printf("\n");
//
//	char arr1[] = {'a','b','c','d','e','f'};
//	printf("%d\n",strlen(arr1));		//���ֵ����ȡ��'\0'����
//	printf("%d\n",strlen(arr1+0));		//���ֵ
//	//printf("%d\n",strlen(*arr1));		//�Ƿ���ֵ��strlen�Ĳ���Ϊһ����ַ���˴�������һ��'a',ʵ�����ڷ��ʵ�ַΪ97('a'��ASCALL��)���ڴ�
//	//printf("%d\n",strlen(arr1[1]));	//�Ƿ���ֵ��strlen�Ĳ���Ϊһ����ַ���˴�������һ��'b'
//	//printf("%d\n",strlen(&arr1));		//���ֵ�������������ַ�������ַҲ�Ǵ�'a'�ĵ�ַ��ʼ��
//	//printf("%d\n",strlen(&arr1+1));	//���ֵ������һ�����ֵ�Ĳ�ֵΪ6
//	printf("%d\n",strlen(&arr1[0]+1));	//���ֵ
//
//	printf("\n");
//
//	char arr2[] = "abcdef";				//�ַ���ĩβĬ��Ϊ'\0'
//	printf("%d\n",sizeof(arr2));		//7,sizeof(������):��ʾ����������Ĵ�С
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
//	printf("%d\n",strlen(arr3));		//6,��'\0'��ֹ��'\0'����
//	printf("%d\n",strlen(arr3+0));		//6
//	//printf("%d\n",strlen(*arr3));		//�Ƿ���ֵ
//	//printf("%d\n",strlen(arr3[1]));	//�Ƿ���ֵ
//	//printf("%d\n",strlen(&arr3));		//6
//	//printf("%d\n",strlen(&arr3+1));	//���ֵ
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
//	//printf("%d\n",strlen(*pp));		//�Ƿ���ֵ
//	//printf("%d\n",strlen(pp[0]));		//�Ƿ���ֵ
//	//printf("%d\n",strlen(&pp));		//���
//	//printf("%d\n",strlen(&pp+1));		//���
//	printf("%d\n",strlen(&pp[0]+1));	//5
//	
//	printf("\n");
//
//	//��ά����
//	int b[3][4] = {0};
//	printf("%d\n",sizeof(b));			//12*4
//	printf("%d\n",sizeof(b[0][0]));		//1*4
//	printf("%d\n",sizeof(b[0]));		//4*4  b[0]Ϊ��һ�е���������sizeof(b[0]),������������sizeof�м�Ϊ�������Ĵ�С
//	printf("%d\n",sizeof(b[0]+1));		//4  b[0]Ϊ��һ�е�������������sizeof(������)��&�������⣬b[0]��Ϊ��һ�е�һ��Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(b[0]+1)));	//4  ��һ�еڶ���Ԫ�ص�ֵ
//	printf("%d\n",sizeof(b+1));			//4
//	printf("%d\n",sizeof(*(b+1)));		//4*4
//	printf("%d\n",sizeof(&b[0]+1));		//4
//	printf("%d\n",sizeof(*(&b[0]+1)));	//4*4	
//	printf("%d\n",sizeof(*b));			//4*4
//	printf("%d\n",sizeof(b[3]));		//sizeof()������ȥ����b[3],ֻ�Ǹ��������������С���ʼ�ʹb[3]������Ҳû��Ӱ�죬sizeof(b[3])�ȼ���sizeof(b[0])
//		
//	printf("\n");
//
//	return 0;
//}

/*****ָ������*****/

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
//	int *ptr1 = (int *)(&a+1);			//������a�ĵ�ַ��һ�൱�������16���ֽ�
//	int *ptr2 = (int *)((int)a+1);		//����ַǿתΪint���һ�൱��ƫ����һ���ֽ�
//	printf("%x  %x\n",ptr1[-1],*ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};		//���ű��ʽ,�ʶ�λ����a[0][0]Ϊ1��a[0][1]Ϊ3��a[1][0]Ϊ5������Ĭ�����0
//	int* p;
//	p = a[0];
//	printf("%d\n",p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];		//��
//	p = a;
//	printf("%p  %d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);		//FFFFFFFC��-4
//	return 0;
//}

//int main()
//{
//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//int* p = arr;		//��ʱ*(p+2)==p[2]==*(arr+2)==arr[2]
//return 0;
//}

//int main()
//{
//	int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int* ptr1 = (int*)(&aa+1);
//	int* ptr2 = (int*)(*(aa+1));		//aa+1�ǵڶ��еĵ�ַ�ȼ���&(�ڶ���������)����*��aa+1��Ϊ�ڶ�������������Ϊ�ڶ�����Ԫ�صĵ�ַ
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
