#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 10
//int a=100;

enum Sex
{
	MALE,
	FEMALE=-1,
	SECRET,
	heal
};

int main()
{
	//��ӡ�������ͳ���
	//printf("%d\n",sizeof(char));  //1
	//printf("%d\n",sizeof(short));  //2
	//printf("%d\n",sizeof(int));  //4
	//printf("%d\n",sizeof(long)); //4
	//printf("%d\n",sizeof(long long));  //8
	//printf("%d\n",sizeof(float));  //4
	//printf("%d\n",sizeof(double));  //8

	//��ӡchar����
	/*char ch = 'A';
	printf("%c\n",ch);*/

	//��ӡ������
	/*float f = 5.131452123456789;
	double f2 = 5.131452123456789;
	printf("%f\n",f);
	printf("%lf\n",f2);*/

	//printf("hello world\n");

	//float weight = 65.5f;  //fָ��65.5Ϊfloat
	/*float a=10.123;
	printf("%d\n",(int)a);*/

	/*int a=10;
	printf("%d\n",a);
	return 0;*/
	
	//int num1=0;
	//int num2=0;
	//int sum=0;
	//printf("��������������\n");
	//scanf("%d%d",&num1,&num2);
	////int sum=0;  //���sum�ڴ˴�����ᱨ��C���Ե��﷨�涨���б������붨���ڴ���飨{}����ͷ��
	//sum = num1+num2;
	//printf("num1+num2=%d\n",sum);

	//extern int test;  //extern ���������ⲿ���ţ�����test���ļ�global.c�ж��壬�ڴ˴�ʹ����Ҫ������
	//printf("test=%d\n",test);
	
	//const int a=0;
	////a=5;
	////scanf("%d",&a);
	//printf("%d\n",a);

	//const int n = 10;
	//int a[n] = {0};//n��Ȼ��const���Σ�����������Ȼ��һ����������[]��Ҫ����һ������
	//return 0;


	//int a[MAX] = {0};//[]���ú궨�嶨��ĳ����ǺϷ���
	//return 0;
	/*int a=1000;
	enum Sex sex = MALE;
	sex = a;
	printf("%d\n%d\n%d\n%d\n",MALE,FEMALE,SECRET,sex);
	return 0;*/

	/*char arr1[] = "abc";
	char arr2[] = {97,65,97,0};
	printf("%d\n",strlen(arr1));
	printf("%s\n",arr2);*/
	/*printf("C:\\test\\32\\test.c\n");
	printf("%s\n","\"\"");*/
	printf("%d\n",strlen("C:\test\X011\test.c"));
	//printf("%c\n",'\12');
	printf("%c\n",'Z');
	return 0;
}