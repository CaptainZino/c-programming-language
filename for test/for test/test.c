#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <iostream.h>
//int main()
//{	
//	/*union test
//	{
//		int a;
//		char b[5];
//	};
//	union test test_union = {0};
//	printf("%d\n",sizeof(test_union));*/
//	unsigned int a = 256;
//	unsigned int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}
//struct test1
//{
//	int a;
//	int arr[10];
//};
//
//struct test2
//{
//	char a;
//	int arr[10];
//};
//int main()
//{
//	//struct test1 test_st = {0};
//	struct test1 *p = NULL;
//	struct test2 *pp = (struct test2*)(p->arr);
//	pp->arr[1] = 5;
//	printf("%p\n",p->arr);
//	
//	return 0;
//}

//
//struct st
//{
//	int a;
//	int* parr; 
//};
//
//int main()
//{
//	struct st test = {0};
//	void* p = malloc(10);
//	(((char*)(&test))+4) = (int*)p;
//	return 0;
//}
//
//struct st
//{
//	int a;
//	int* parr; 
//};
//int main()
//{
//	struct st sta = {0};
//	//int b = (int)(&sta);
//	struct st* p = NULL;
//	//p = (int)(&sta);
//	//((struct st*)b)->a = 1;
//	printf("%d\n",sta.a);
//	return 0;
//}

///*struct st
//{
//	int a;
//	int* parr; 
//};
//int main()
//{
//	struct st* p = NULL;
//	printf("%d\n",sizeof(*p));
//	*/return 0;
//}

//int main()
//{
//	FILE* p = fopen("./test.txt","r");
//	if(p == NULL)
//	{
//		perror("read file test:");
//		return 0;
//	}
//	else
//	{
//		while(fgetc(p)!=
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;		//ch�����ͱ�����int��������char		//fallible
//	//����ȡ��ascallΪ255(OXFF)���ַ�,fgetc()�᷵��0x000000FF(255)
//	//255����char��Ϊ-1
//	//while((ch=fgetc(pf))!=EOF)�ж�Ϊ�٣���ascall��ֵΪ255���ַ�֮����ַ����޷���ȡ
//	FILE* pf = fopen("./test.txt","r");
//	if(pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	while((ch=fgetc(pf))!=EOF)		//fgetc()��ȡʧ�ܻ��߶�ȡ����ʱ���᷵��EOF
//	{
//		//printf("%d\n",ch);
//		putchar(ch);
//	}
//	printf("\n");
//	//�жϽ���ԭ��
//	if(ferror(pf))		//���pf�����Ƿ��ж�д�������У����ط���ֵ
//	{
//		printf("error\n");
//	}
//	else if(feof(pf))
//	{
//		printf("read success\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char str[100] = {0};
//	int ch = 0;		
//	FILE* pf = fopen("./test.txt","r");
//	if(pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	fgets(str,100,pf);
//	printf("\n");
//	//�жϽ���ԭ��
//	if(ferror(pf))		//���pf�����Ƿ��ж�д�������У����ط���ֵ
//	{
//		printf("error\n");
//	}
//	if(feof(pf))
//	{
//		printf("read success\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if(p == NULL)
//	{
//		perror("p:");
//	}
//	*p = 4;
//	printf("%d\n",*p);
//	free(p);
//	p = NULL;
//	return 0;
//}

//typedef union st
//{
//	int a;  //4
//	struct st1
//	{
//		int a;
//		char b[5];
//	}s1;  //4
//	struct st2
//	{
//		char a;
//		int b;
//	}s2;  //4
//}str_;
//
//int main()
//{
//	str_ ua = {0};
//	fprintf(stdout,"the size of ua:%d\n",sizeof(ua));
//	return 0;
//}

//int main()  
//{ 
//    int a=3, b = 5;
//    printf(&a["Ya!Hello! how is this? %s\n"], &b["junk/super"]);
//    //a[i] = *(a+i) = *(i+a) = i[a]
//	//"Ya!Hello! how is this? %s\n"[a] = Y�ĵ�ַ+3Ȼ������ã�Hello! how is this? %s\n
//    printf(&a["WHAT%c%c%c  %c%c  %c !\n"], 1["this"],
//        2["beauty"],0["tool"],0["is"],3["sensitive"],4["CCCCCC"]);
//
//    return 0;
//}

//union st
//{
//	char a;
//	int b;
//}s1;
//int main()
//{
//	s1.b = 1;
//	if(s1.a == 1)
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
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
//	//test_1();
//	//test_2();
//	//test_3();
//	//test_4();
//	
//	return 0;
//}


//int compare(void* num1,void* num2)
//{
//	return *(int*)num1 - *(int*)num2;
//}
//void change(char* num1,char* num2,int size)  //���ֽڽ�������δ֪���͵�����
//{
//	int i = 0;
//	char temp;
//	for(i=0;i<size;i++)
//	{
//		temp = *num1;
//		*num1 = *num2;
//		*num2 = temp;
//		num1++;
//		num2++;
//	}
//}
//void bubble_sort(void* base,int sum,int size,int (*p_fun)(void* num1,void* num2))
//{
//	int i = 0;
//	int j = 0;
//	for(i=0;i<sum-1;i++)
//	{
//		for(j=0;j<sum-i-1;j++)
//		{
//			if(p_fun(((char*)base)+j*size,((char*)base)+(j+1)*size)>0)
//			{
//				change(((char*)base)+j*size,((char*)base)+(j+1)*size,size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	printf("please input 10 number you want to sort:\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	bubble_sort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),compare);
//	for(i=0;i<10;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for(int i=0;i<5;i++)
//	{
//		printf("hello there\n");
//	}
//	return 0;
//}

//int test()
//{
//	
//}
//int main()
//{
//	int a = test();
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	fprintf(stderr,"test\n");
//	return 0;
//}

//extern const int arr[10];
//int main()
//{
//	printf("%d\n",arr[5]);
//	return 0;
//}

//int test()
//{
//
//}
//int main()
//{
//	int a = test();
//	printf("%d\n",a);
//	return 0;
//}

//void test()
//{}
//int main()
//{
//	void (*p)() = test;
//	void (*p1)() = &test;
//	printf("%p\n",p);
//	printf("%p\n",p1);
//	return 0;
//}


//char* test()
//{
//	char* p = NULL; 
//	return p;
//}
//int main()
//{
//	char* p = test();
//	char* p1 = test();
//	printf("%p\n",p);
//	printf("%p\n",p1);
//	return 0;
//}

//int main()
//{
//	char* str = "abcdef";
//	char* a,b,c,d;
//	char *a,b,c,d;
//	printf(str);
//	return 0;
//}
