#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*****�ṹ�塢ö�١�������*****/

//struct
//{
//	int a;
//	char c;
//}sa;		//�����ṹ��
//struct
//{
//	int a;
//	char c;
//}* psa,saa;
//
//int main()
//{
//	psa = &saa;
//	//psa = &sa;		//��Ȼ���������ṹ���Ա����һ�£����������Ὣ�俴��������ͬ�Ľṹ��
//	return 0;
//}

//�ṹ���������

//struct Node
//{
//	int data;
//	//struct Node n;		//�ṹ���ﲻ�ܰ����������͵Ľṹ��  //�޷������С�����޷�����ռ�
//};

//struct Node
//{
//	int data;
//	struct Node*  next;
//};

/*typedef struct Node
{
	int data;
	struct Node*  next;
}Node;	*/	//��struct NodeΪNode

/*typedef struct
{
	int data;
	Node1*  next;
}Node1;	*/	//��д������  //Node* next���ض���Node֮ǰ

//int main()
//{
//	struct Node n1;
//	Node1 n2;
//	return 0;
//}

//�ṹ���ڴ����

//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//struct S2
//{
//	char a;
//	char b;
//	int c;
//};
//
//int main()
//{
//	struct S1 s1 = {0};
//	struct S2 s2 = {0};
//	printf("%d\n",sizeof(s1));
//	//��һ����Ա�����ڽṹ�����ƫ����Ϊ0�ĵ�ַ��
//	//������Ա����Ҫ���䵽ĳ������(������)���������ĵ�ַ��
//	//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//	//�ṹ���ܴ�СΪ��������(ÿ����Ա��������һ��������(Ϊ�ó�Ա������С��Ĭ�϶������Ľ�Сֵ))��������
//	//vs��Ĭ�϶�����Ϊ8������s1��ŵ���ʼ��ַΪ0����a����ڵ�һ���ֽڣ�b����ڵ��ĵ��ڰ˸��ֽڣ�c����ڵھŸ��ֽڣ�Ȼ�������ֽڣ���Ϊ��������4��������
//	//gccû��Ĭ�϶�����
//	printf("%d\n",sizeof(s2));
//	return 0;
//}

struct s3
{
	double d;
	char c;
	int i;
};  //16

struct s4
{
	char c1;
	struct s3 s3;
	double d;
	char c;
};
int main()
{
	struct s4 s4;
	//���Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����䵽�Լ�����������(s3����������Ϊ8)����������
	//�ṹ��������С����������������(��Ƕ�׽ṹ��Ķ�����)��������
	printf("%d\n",sizeof(s4));
	return 0;
}

//�ڴ�����ԭ��
//ƽ̨ԭ��ĳЩӲ��ƽ̨������������������ַ���������ݣ�ֻ����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ�������׳�Ӳ���쳣
//����ԭ�򣺷���δ������ڴ棬��������Ҫ�����η��ʣ���������ڴ����һ�η���
//�Կռ任ȡʱ��
//�����ṹ���ʱ��Ӧ������ռ�ÿռ�С�ĳ�Ա������һ��

//#pragma pack(1)		//����Ĭ�϶�����Ϊ1
//struct S
//{
//	char a;
//	double i;
//};
//#pragma pack()		//ȡ�����õ�Ĭ�϶�����
//
//struct A
//{
//	char a;
//	double i;
//};
//
//int main()
//{
//	struct S s;
//	struct A a;
//	printf("%d  %d\n",sizeof(s),sizeof(a));
//	return 0;
//}

//#include <stddef.h>		//offsetofͷ�ļ�
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();		//����ṹ���Ա�����ṹ���ƫ����  //offsetofΪ��
//	printf("%d\n",offsetof(struct S,c));
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//	return 0;
//}

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//void Init(struct S* p)
//{
//	p->c = 'a';
//	p->i = 100;
//	p->d = 3.14;
//}
//void Print1(struct S s)
//{
//	printf("%c %d %lf\n",s.c,s.i,s.d);
//}
//void Print2(const struct S* p)		//*pֻ��
//{
//	printf("%c %d %lf\n",p->c,p->i,p->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//λ��
//λ�εĳ�Ա�����Ǹ���������(int��unsigned int��signed int��char)
//λ�εĳ�Ա��������һ��ð�ź�һ������
//λ�β���ƽ̨������ֲ�Բ�

//struct A		//λ��  //λΪ������λ
//{
//	int a:2;	//aֻռ��������λ
//	int b:5;
//	int c:10;
//	int d:30;	//����Ϊint����ʱð�ź�����ֲ��ܴ���32��Ϊchar����ʱð�ź�����ֲ��ܴ���8
//};
////λ�����ĸ��ֽ�(int)��һ���ֽ�(char)���пռ俪��
//
//int main()
//{
//	struct A a;
//	printf("%d\n",sizeof(a));		//8���ֽ�  //�ڴ����������ĸ��ֽڵĿռ䣬ǰ�ĸ���a��b��c�����ĸ���d
//	return 0;
//}

//λ�νṹ���к��в�ͬ����

//struct A		//λ��  //λΪ������λ
//{
//	char a:2;	//aֻռ��������λ
//	int b:5;	//����һ���ֽڴ洢a��Ҫ����ƫ�ƣ�Ȼ�����·���ռ����洢���͵�b��c��d
//	int c:10;
//	int d:30;	//����Ϊint����ʱð�ź�����ֲ��ܴ���32��Ϊchar����ʱð�ź�����ֲ��ܴ���8
//};
////λ�����ĸ��ֽ�(int)��һ���ֽ�(char)���пռ俪��
//
//int main()
//{
//	struct A a;
//	printf("%d\n",sizeof(a));
//	return 0;
//}

//struct A
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//
//int main()
//{
//	struct A s = {0};
//	s.a = 10;		//aֻ����������λ���д洢���ᷢ���ض�
//	s.b = 20;		//bֻ���ĸ�����λ���д洢���ᷢ���ض�
//	s.c = 3;
//	s.d = 4;
//	printf("%d  %d  %d  %d\n",s.a ,s.b,s.c,s.d);
//	return 0;
//}
	

//ö��

//enum Color
//{
//	RED,			//0
//	GREEN = 5,		//ע��Ϊ����
//	BLUE			//6
//};
//
//int main()
//{	
//	enum Color c = GREEN;
//	enum Color c1 = BLUE;
//	//enum Color c1 = 5;		//�˸�ֵ�����Ƿ�
//	printf("%d\n",sizeof(c));	//ö�����͵ĳ�Ա����Ϊint����
//	printf("%d\n",c);
//	printf("%d\n",c1);
//	return 0;
//}

//����(������)
//��Ա��������ͬһ��ռ�
//������Ĵ�С����Ϊ���ĳ�Ա�����Ĵ�С
//������Ա�����Ĵ�С��������������������ʱ����Ҫ���뵽����������������
//��Ա��������ͬʱʹ��

//union Em
//{
//	char c;
//	int i;
//};
//int main()
//{
//
//	union Em U;
//	printf("%d\n",sizeof(U));
//	printf("%p\n",&(U.c));
//	printf("%p\n",&(U.i));
//	printf("%p\n",&U);
//	return 0;
//}

//�жϴ�С���ֽ���

//int main()
//{
//	int a = 1;
//	if(1==(*(char*)(&a)))
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//	return 0;
//}

//union Em
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Em U;
//	U.i = 1;
//	if(U.c==1)
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//	return 0;
//}

//union Un
//{
//	int a;				//������Ϊ4
//	char arr[5];		//��char�Ĵ�С�������������������Ĵ�С  //������Ϊ1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));		//char arr[5]�Ĵ�С����4�����������ʶ��뵽4��������
//	return 0;
//}
