#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*****��̬�ڴ����*****/

//malloc
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(sizeof(int)*10);		//INT_MAX  //c���Ա�׼δ����sizeΪ0�����
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));		//��ӡ����ԭ��
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;
//			printf("%d\n",*(p+i));
//		}
//	}
//	free(p);		//���������գ�pָ��Ŀռ�Ҫ�ȵ���������Ż��ͷ�
//	p = NULL;		//��ֹ֮ǰ����Ŀռ䱻�����
//	return 0;
//}

//calloc

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));		//����10�����Ϳռ䲢��ʼ��Ϊ0��malloc�����ʼ��
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));		//��ӡ����ԭ��
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			printf("%d\n",*(p+i));
//		}
//	}
//	free(p);		//free�ͷŶ�̬���ٵĿռ�
//	p = NULL;
//	return 0;
//}

//realloc  //������̬�����ڴ�Ĵ�С

//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10*sizeof(int));
//	int* ptr = NULL;
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;
//			//printf("%d\n",*(p+i));
//		}
//	}
//	//���pָ��Ŀռ�������㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ�Ȼ�󷵻�p
//	//���pָ��Ŀռ����û���㹻�Ŀռ����׷�ӣ���realloc������������һ���µ��ڴ�����������һ����������Ŀռ䣬����ԭ���ڴ��е�����
//	//����������Ȼ�󽫾ɵĿռ��ͷţ���󷵻��¿��ٵ��ڴ�ռ��ַ
//	//p = (int*)realloc(p,20);		//����ֱ�ӽ�realloc�ķ���ֵ����p����ֹrealloc����ʧ�ܣ����ؿ�ָ�룬����֮ǰpָ����ڴ涪ʧ
//	ptr = (int*)realloc(p,20*sizeof(int));
//	if(ptr!=NULL)
//	{
//		p = ptr;
//		for(i=10;i<20;i++)
//		{
//			*(p+i) = i;
//			//printf("%d\n",*(p+i));
//		}
//		/*for(i=0;i<20;i++)
//		{
//			printf("%d\n",*(p+i));
//		}*/
//	}
//	for(i=0;i<20;i++)
//	{
//		printf("%d\n",*(p+i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)realloc(NULL,40);		//��realloc����ָ��ʱrealloc�����õȼ���malloc
//	return 0;
//}

//��̬�ڴ泣������

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i) = 0;		//���ж�malloc�Ƿ����ɹ���ֱ�ӽ��н����ã���Ϊ�Ƿ�����  //�����ǶԿ�ָ����н�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i) = i;		//�Զ�̬���ٵ��ڴ����Խ�����
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);		//�ԷǶ�̬���ٵ��ڴ����free
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for(i=0;i<10;i++)
//		{
//			*p++ = i;		//p�����˼Ӳ���������ָ�������̬����Ŀռ�Ļ���ַ
//		}
//	}
//	free(p);		//ʹ��free�ͷŶ�̬�����ڴ��һ����
//	p = NULL;
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{
//		return 0;
//	}
//	free(p);		//Ϊ��ֹ��ͬһ�鶯̬�ڴ���ж���ͷţ�Ӧ���ͷź�p��ΪNULL
//	free(p);		//��ͬһ�鶯̬�ڴ���ж���ͷ�
//	p = NULL;
//	return 0;
//}

//#include <stdlib.h>
//void test()
//{
//	int* p = (int*)malloc(100);
//	if(p!=NULL)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();		//��̬���ٵ��ڴ������ͷ�(�ڴ�й¶)
//	while(1);
//	return 0;
//}

//��������

//1
//#include <string.h>
//#include <stdlib.h>
//
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);		//����GetMemory֮��p�Ͳ������ˣ�������Ŀռ�δ�ͷţ�������ڴ�й¶
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(str);		//ֵ����  //�������������������ǲ��ǵ�ַ��ֻҪ�Ǵ��ı�����������ֵ���ݣ�
//	strcpy(str,"hello there");		//str����Ϊ��
//	printf(str);
//}
//int main()
//{
//	test();
//	//char arr[] = "abcedf";
//	//char* str = "abcdef";
//	//printf(str);
//	//printf("\n");
//	//printf("%s\n",str);
//	//printf("abcdef\n");		//���ִ�ӡ��ʽ�ȼ�
//	//printf(arr);
//	//printf("\n");
//	return 0;
//}


//#include <string.h>
//#include <stdlib.h>
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello there");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//2
//char* GetMemory(void)
//{
//	char p[] = "hello there";		//p[]���������ڽ�����GetMemory
//	return p;		//ջ�ϵĿռ��ַ������㷵��
//}
//void test(void)
//{
//	char* str = NULL;
//	str = (char*)GetMemory;		//�Ƿ������ڴ�	
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;		//static int a = 10;
//	printf("%p\n",&a);
//	return &a;		//����ջ����ַ
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n",p);
//	*p = 20;		//�Ƿ������ڴ�
//	return 0;
//}


//3
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void GetMemory(char* *p,int num)
//{
//	*p = (char*)malloc(num);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str,100);
//	//ʹ��ǰδ�п�
//	strcpy(str,"hello there");
//	printf(str);
//	//ʹ����δfree
//}
//int main()
//{
//	test();
//	return 0;
//}

//4
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//void test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str,"hello there");
//	free(str);
//	//�˴�Ӧ�ֶ���str�ÿ�
//	if(str!=NULL)
//	{	
//		//�Ƿ��������ͷŵ��ڴ�
//		strcpy(str,"hello there");
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

/*****��������*****/
//�ṹ�������һ��Ԫ��������δ֪��С�����飬�ͽ������������Ա
//����������������߷����ٶȣ������ڴ���Ƭ
//���������������ͷſռ�

//#include <stdio.h>
//#include <stdlib.h>
//
//struct S 
//{
//	int n;
//	int arr[];		//δ֪��С		//Ҳ����д��int arr[0];		//���������Ա������Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));		//����ṹ���Сʱ��������������Ĵ�С
//	int i = 0;
//	struct S* pps = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));		//���������СΪ5
//	ps->n = 100;
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	pps = (struct S*)realloc(ps,44);
//	if(pps != NULL)
//	{
//		ps = pps;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=-0;i<10;i++)
//	{
//		printf("%d\n",ps->arr[i]);
//	}
//	free(ps);		//�ͷ�psָ��Ŀռ�
//	ps = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct S 
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	int i = 0;
//	int* pps = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->n = 100;
//	ps->arr = (int*)malloc(sizeof(int)*5);
//	printf("%d\n",ps->n);
//	for(i=0;i<5;i++)
//	{
//		ps->arr[i] = i;
//	}
//	pps = (int*)realloc(ps->arr,40);
//	if(pps != NULL)
//	{
//		ps->arr = pps;
//	}
//	for(i=5;i<10;i++)
//	{
//		ps->arr[i] = i;
//	}
//	for(i=-0;i<10;i++)
//	{
//		printf("%d\n",ps->arr[i]);
//	}
//	free(ps->arr);		//�ͷ�ps.arrָ��Ŀռ�  //Ӧ�����ͷ�ps->arr
//	ps->arr = NULL;
//	free(ps);			//�ͷ�psָ��Ŀռ�
//	ps = NULL;
//	return 0;
//}


