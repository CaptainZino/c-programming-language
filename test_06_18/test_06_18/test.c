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
	//打印各种类型长度
	//printf("%d\n",sizeof(char));  //1
	//printf("%d\n",sizeof(short));  //2
	//printf("%d\n",sizeof(int));  //4
	//printf("%d\n",sizeof(long)); //4
	//printf("%d\n",sizeof(long long));  //8
	//printf("%d\n",sizeof(float));  //4
	//printf("%d\n",sizeof(double));  //8

	//打印char类型
	/*char ch = 'A';
	printf("%c\n",ch);*/

	//打印浮点型
	/*float f = 5.131452123456789;
	double f2 = 5.131452123456789;
	printf("%f\n",f);
	printf("%lf\n",f2);*/

	//printf("hello world\n");

	//float weight = 65.5f;  //f指定65.5为float
	/*float a=10.123;
	printf("%d\n",(int)a);*/

	/*int a=10;
	printf("%d\n",a);
	return 0;*/
	
	//int num1=0;
	//int num2=0;
	//int sum=0;
	//printf("请输入两个整数\n");
	//scanf("%d%d",&num1,&num2);
	////int sum=0;  //如果sum在此处定义会报错，C语言的语法规定所有变量必须定义在代码块（{}）的头部
	//sum = num1+num2;
	//printf("num1+num2=%d\n",sum);

	//extern int test;  //extern 用以声明外部符号，变量test在文件global.c中定义，在此处使用需要先声明
	//printf("test=%d\n",test);
	
	//const int a=0;
	////a=5;
	////scanf("%d",&a);
	//printf("%d\n",a);

	//const int n = 10;
	//int a[n] = {0};//n虽然被const修饰，但本质上任然是一个变量，而[]需要的是一个常量
	//return 0;


	//int a[MAX] = {0};//[]中用宏定义定义的常量是合法的
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