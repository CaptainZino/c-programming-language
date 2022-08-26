#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//struct st1
//{
//	int a;
//	int b;
//};
//struct st2
//{
//	int c;
//	int d;
//	int e;
//	int f;
//};
//struct st
//{
//	struct st2 str2;
//	struct st1 str1;
//};
//int main()
//{
//	struct st str = {{1,2,3,4},{5,6}};
//	//struct st1 str_2 = {20,'r'};
//	struct st* p = &str;
//	int* pp = (int*)p;
//	//printf("%d\n",*(pp+1));
//	struct st1* ppp = (struct st1*)pp;
//	printf("%d\n",ppp->b);
//	//printf("%d\n",str_1.str.b);
//	return 0;
//}

//struct st
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	int e;
//	int f;
//}st1;
//int main()
//{
//	struct st st1 = {1,2,3,4,5,6};
//	struct st* p = &st1;
//	//printf("%s\n",*(int *)p->d);
//	printf("%p\n",p);
//	printf("%p\n",p+1);
//	return 0;
//}


//int main()
//{
//	int *p = NULL;
//	p = (int*)(malloc(sizeof(int)));
//	/*int* pp = NULL;
//	pp = p;
//
//	printf("%p\n",p);
//	printf("%p\n",&p);
//	printf("%d\n",*p);*/
//	if(p==NULL)
//	{
//		printf("%p\n",p);
//	}
//	else
//	{
//		printf("NOT NULL\n");
//	}
//	return 0;
//}