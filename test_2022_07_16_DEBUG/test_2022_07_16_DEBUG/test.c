#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//DEBUG:���԰汾������������Ϣ���ɵ���
//Release�������汾�����ܵ���

//F5:�������ԣ�������һ���ϵ㴦��Ҫ��F9(���öϵ�)���ʹ��
//F10�������
//F11�������

//int main()
//{
//	int i = 0;
//	for(i=0;i<100;i++) 
//	{
//		printf("%d\n",i);
//	}
//	for(i=0;i<100;i++) 
//	{
//		printf("%d\n",10-i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	for(i=0;i<15;i++) 
//	{
//		printf("hehe\n");	
//		arr[i] = 0;
//		//ջ����ʹ�ã���ʹ�øߵ�ַ�Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ�
//		//�������ڴ���������ţ������±����������ַ�ɵ͵��߱仯
//		//����i��arr�����λ�þͲ�����ѭ����Release���������ߵ�λ��
//	}
//	//system("pause");
//	return 0;
//}

//int add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = add(a,b);	//F11���Կɽ���add����	//SHIFT+F11:��������add
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//ģ��ʵ��strcpy

//void my_strcpy(char* des,char* src)
//{
//	while((*src)!='\0')
//	{
//		*(des++) = *(src++);	//�����ź������ţ�	//����++
//	}
//	*des = *src;
//	
//}
//int main()
//{
//	char arr1[] = "#########################";
//	char arr2[] = "hello there";
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1,arr2);
//	printf(arr1);
// 	return 0;
//}

//�Ż�
//char* my_strcpy(char* des,const char* src)
//{
//	char* p = des;
//	assert(des != NULL && src != NULL);	//����
//	//��srcָ����ַ���������des�У�����'\0'
//	while(*des++ = *src++)	//�Ⱥű��ʽΪ*src��ֵ��*src������'\0'ʱ���ʽΪ��
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char arr1[] = "#########################";
//	char arr2[] = "hello there";
//	//strcpy(arr1,arr2);
//	printf(my_strcpy(arr1,arr2));
// 	return 0;
//}

//int main()
//{
//	const int t = 5;
//	const int i = 10;
//	const int n = 100;
//	int* pp = NULL;
//	int* const p1 = NULL;
//	const int* p = &i;
//	//*p = 20;	//err	//const����ָ�����*�����ʱ�����ε���*p��Ҳ����˵����ͨ��p���ı�i��ֵ
//	printf("%d\n",i);
//
//	pp = &t;
//	*pp = 15;
//	printf("%d\n",t);
//
//	//p1 = &n;	//const����ָ�����*���ұ�ʱ�����ε���p��������(�����ĵ�ַ)���ܸı�
//	return 0;
//}


//strlen
int my_strlen(const char* str)
{
	int len = 0;
	assert(str != NULL);	//��ָ֤����Ч��
	while(*str++ != '\0')
	{
		len++;
	}
	return len;
}
int main()
{
	char arr[] = "abcdef";
	//char* arr1 = NULL;
	printf("%d\n",my_strlen(arr));
	return 0;
}