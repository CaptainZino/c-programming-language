#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/*****Ԥ����*****/
//test.c->test.i->test.s->test.c(test.obj)
//Ԥ���룺�ı�����
//���룺��c���뷭��ɻ�����
//��ࣺ�ѻ�����ת���ɶ�����ָ��

//extern int add(int x,int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//	printf("a+b=%d\n",add(a,b));
//
//	return 0;
//}


//Ԥ�������
int main()
{
	//printf("%s\n",__FILE__);    //��ӡ�ļ���(������·��)
	//printf("%d\n",__LINE__);    //��ӡ�к�
	//printf("%s\n",__DATE__);    //��ӡ����
	//printf("%s\n",__TIME__);    //��ӡʱ��
	//printf("%c\n"__FUNCTION__); //��ӡ������
	//printf("%d\n",__STDC__);    //����������ѭANSI C����ֵΪ1������δ����

	//д��־�ļ�
	int i = 0;
	int arr[10] = {0};
	FILE* pf = fopen("log.txt","w");
	if(pf==NULL)
	{
		//perror("open file log.txt");  //��ӡ������Ϣ
		printf("%d\n",errno);
		return 0;
	}
	for(i=0;i<10;i++)
	{
		arr[i] = i;
		fprintf(pf,"file:%s  line:%d  date:%s  time:%s  i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);  //д��־�ļ�
	}
	for(i=0;i<10;i++)
	{
		printf("%d  ",arr[i]);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}

//Ԥ����ָ��
 
//#define�������
//#define do_forever for(;;)
//int main()
//{
//	do_forever;
//	return 0;
//}

//#define�����
//#define SQUARE(X) X*X  //�����ź�SQUARE�䲻���пո񣬷������ڶ���һ������(�޲κ궨��)
//int main()
//{
//	/*int ret = SQUARE(5);
//	printf("%d\n",ret);*/
//
//	int ret = SQUARE(5+1);  //��Ĳ������ǽ��д���ʹ�ã������滻
//	printf("%d\n",ret);		//5+1*5+1
//	return 0;
//}

//#define MAX 5
//#define DOUBLE(X) X+X
//#define DOUBLE1(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10*DOUBLE(MAX);  //���еĲ���������#define������������������Ǻ겻�ܳ��ֵݹ�
//	int ret1 = 10*DOUBLE1(MAX);
//	printf("%d\n",ret);  //10*5+5
//	printf("%d\n",ret1);  //10*((5)+(5))
//	printf("MAX = %d\n",MAX);  //�ַ������MAX���ᱻ�滻
//	return 0;
//}

//#������Ĳ������뵽�ַ�����
//#define PRINT(X) printf("the value of "#X" is %d\n",X)  //#X�ᱻ�滻��"X"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a" "is %d\n",b);
//	PRINT(b);
//	//printf("the value of ""b" "is %d\n",b);
//	return 0;
//}

//##�����԰�λ�������ߵķ��źϳ�һ�����ţ�������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int abcdef = 2022;
//	printf("%d\n",CAT(ab,cdef));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}

//�������õĺ����
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++,b++);  //��Ĳ������и����ã�������ʹ��
//	//((a++)>(b++)?(a++):(b++))
//	printf("%d\n",max);
//	printf("%d\n",a);
//	printf("%d\n",b);
//
//	return 0;
//}

//��ͺ����ĶԱ�
//����Լ��������ȫ����д����������Ҫȫ����д

//�������ڴ���򵥵�����
//int Max(int x,int y)
//{
//	return (x>y?x:y);
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	float c = 10.0f;
//	float d = 20.0f;
//	int max = MAX(a,b);
//	//�궨����Ԥ����׶ξ�������滻��û�е��úͷ��صĿ���
//	int max1 = Max(a,b);
//	//�����ڵ��õ�ʱ����е��úͷ��صĿ���
//	float max2 = MAX(c,d);
//	//��Բ�������û���޶�
//	float max3 = Max(c,d);
//	//����ֻ�ܴ����ض����͵Ĳ���
//
//	return 0;
//}

//ÿ��ʹ�ú궨�壬һ�ݺ궨��Ĵ���ͻᱻ���뵽�����У�����ϳ�ʱ���������ӳ���ĳ���
//���޷�����
//���������޹أ������Ͻ�
//����ܻ������������ȼ������⣬���³������׳���

//����������������������£����磺��Ĳ������������ͣ�������������
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10,int);
//	return 0;
//}

//#undef:�Ƴ�һ���궨��
//#define MAX 100
//int main()
//{
//	printf("%d\n",MAX);
//#undef MAX
//	printf("%d\n",MAX);
//	return 0;
//}

//�����ж���
//����C�ı������ṩһ���������������������ж�����ţ���������������̡�

//��������

//#define DEBUG  //DEBUG��������Ҳ������1��Ҳ���Բ���ֵ��ֻҪ�����˶��壬L206��Ϊ��
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG  //���������DEBUG
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#ifndef DEBUG
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = 0;
//#if 1
//		printf("%d\n",arr[i]);
//#endif
//	}
//	return 0;
//}

//#define x 1
//int main()
//{
//#if	  x==1
//		printf("%d\n",x);
//#elif x==2
//		printf("%d\n",x);
//#else
//		printf("%d\n",x);
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)	//�ȼ���#ifdef DEBUG
//	printf("hello there\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if !defined(DEBUG)
//	printf("hello there\n");
//#endif
//	return 0;
//}

//#include
//#include "" ���Ҳ���Ϊ������Դ�ļ�����Ŀ¼�²��ң����Ҳ��������ڱ�������װĿ¼�²���(....\VC\inlucde)
//#incldue <> ���Ҳ���Ϊ��ֱ���ڱ�������װĿ¼�²���

//offsetof��ʵ��
//#include <stddef.h>
//#define OFFSETOF(struct_name,member_name) (int)(&(((struct_name*)0)->member_name))
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n",OFFSETOF(struct S,c1));
//	printf("%d\n",OFFSETOF(struct S,a));
//	printf("%d\n",OFFSETOF(struct S,c2));
//	return 0;
//}