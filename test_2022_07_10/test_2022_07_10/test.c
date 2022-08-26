#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*****文件操作*****/

//10000以二进制和ASCALL的形式存到外存中？

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb");
//	fwrite(&a,4,1,pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//打开文件test.txt
//	//fopen("test.txt","r");	//test.txt在当前路径下
//	//fopen("./test.txt","r");	//test.txt在当前路径下
//	//fopen("../test.txt","r");	//test.txt在上一级路径下
//
//	//fopen("D:\\Learn something\\workspace\\sourcefile for C\\test_2022_07_10\\test_2022_07_10\\test.txt","r");  // \\防止转义字符
//	//fopen("D:/Learn something/workspace/sourcefile for C/test_2022_07_10/test_2022_07_10/test.txt","r");		  // /等价与\\
//	//绝对路径
//
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	else
//	{
//		;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	else
//	{
//      //fputc():字符输出函数
//		fputc('h',pf);		//向pf维护的文件里写数据
//		fputc('e',pf);
//		fputc('l',pf);
//		fputc('l',pf);
//		fputc('o',pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	else
//	{	
//        //fgetc():字符输入函数
//		printf("%c",fgetc(pf));		//读取pf维护的文件里的数据
//		printf("%c",fgetc(pf));
//		printf("%c",fgetc(pf));
//		printf("%c",fgetc(pf));
//		printf("%c",fgetc(pf));
//			
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//	return 0;
//}

//键盘-标准输入设备-stdin
//屏幕-标准输出设备-stdout
//键盘和屏幕是一个程序会默认打开的流设备
//程序会默认打开stdin、stdout、stderr三个流设备

//int main()
//{
//	int i = fgetc(stdin);		//从标准输入流的键盘输入数据  //fgetc适用于所有的输入流
//	fputc(i,stdout);			//将i输出到标注输出流的屏幕上  //fputc适用于所有的输出流
//	return 0;
//}


//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	puts(buf);				//将buf输出到stdout
//	fgets(buf,1024,pf);		//文本行输入函数，适用于所有输入流
//	//printf("%s\n",buf);
//	puts(buf);				//puts()打印完数据后会自动换行
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputs("hello\n",pf);		//文本行输出函数，适用于所有输出流
//	fputs("there\n",pf);
//	//printf("%s\n",pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//	fgets(buf,1024,stdin);		//从键盘读取一行文本信息
//	fputs(buf,stdout);			//将buf中存储的文本信息打印到屏幕上
//
//	gets(buf);					//从标准输入流中读取一行数据  //不检查buf大小，容易缓存溢出  //建议用fgets代替
//	puts(buf);					//将读取数据输出到标准输出流  //不检查buf大小，容易缓存溢出  //建议用fputs代替
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {100,3.14f,"hello"};
//	FILE* pf = fopen("test.txt","w");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);		//格式化输出函数，适用于所有输出流  //格式参考printf()，printf默认输出对象为stdout
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));		//格式化输入函数，适用于所有输入流  //格式参考scanf()，scanf默认输入对象为stdin
//	printf("%d  %f  %s\n",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),&(s.arr));		//等价于scanf("%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fprintf(stdout,"%d  %.2f  %s\n",s.n,s.score,s.arr);			//等价于printf("%d  %.2f  %s\n",s.n,s.score,s.arr);
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {100,3.14,"abcdef"};
//	struct S temp = {0};
//	char buf[1024] = {0};
//	sprintf(buf,"%d  %f  %s\n",s.n,s.score,s.arr);		//把格式化的数据转换成字符串存储到buf
//	printf(buf);
//	sscanf(buf,"%d  %f  %s\n",&(temp.n),&(temp.score),&(temp.arr));  //从buf中读取格式化的数据到temp中
//	printf("%d  %.2f  %s\n",temp.n,temp.score,temp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = {"张三",25,99};
//	FILE* pf = fopen("test.txt","wb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);		//二进制形式向pf维护的文件中写入数据
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S tmp = {0};
//	FILE* pf = fopen("test.txt","rb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fread(&tmp,sizeof(struct S),1,pf);		//二进制形式向pf维护的文件中读出数据
//	printf("%s  %d  %.2f\n",tmp.name,tmp.age,tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char ch;
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	//SEEK_CUR:文件指针的当前位置;SEEK_END:文件的末尾;SEEK_SET：文件的起始位置
//	//fseek(pf,3,SEEK_CUR);		//定位文件指针
//	fseek(pf,-2,SEEK_END);		//定位文件指针
//	ch = fgetc(pf);				//获取当前指针指向的字符
//	printf("%c\n",ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char ch;
//	int pos;
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf,-2,SEEK_END);		//定位文件指针
//	pos = ftell(pf);			//获取文件指针相对起始位置的偏移量
//	printf("%d\n",pos);
//	rewind(pf);					//让文件指针回到起始位置	
//	pos = ftell(pf);			//获取文件指针相对起始位置的偏移量
//	printf("%d\n",pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//文件结束的判定

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	i = fgetc(pf);
//	printf("%d\n",i);		//文件为空，打印EOF(-1)
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof():不能用其返回值来判定文件是否结束，而是当文件读取结束的时候，判断结束是因为读取失败而结束还是遇到文件末尾而结束
//feof():读到末尾返回真值，否则返回假值
//判断文件是否读取结束的正确方法是：
//文本文件：fgetc()的返回值是否为EOF；fgets()的返回值是否为NULL
//二进制文件：fread()返回值是否小于实际要读的次数


//int main()
//{
//	//printf("%s\n",strerror(errno));
//	//strerror:把错误码errno对应的错误信息的字符串地址返回
//
//	FILE* pf = fopen("test1.txt","r");
//	if(pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		perror("open file test1.txt");
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本文件
//int main()
//{
//	int ch = 0;		//ch的类型必须是int而不能是char		//fallible
//	//若读取到ascall为255(OXFF)的字符,fgetc()会返回0x000000FF(255)
//	//255存在char中为-1
//	//while((ch=fgetc(pf))!=EOF)判断为假，则ascall码值为255的字符之后的字符就无法读取
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	while((ch=fgetc(pf))!=EOF)		//fgetc()读取失败或者读取结束时都会返回EOF
//	{
//		//printf("%d\n",ch);
//		putchar(ch);
//	}
//	printf("\n");
//	//判断结束原因
//	if(ferror(pf))		//检测pf流上是否有读写错误，若有，返回非零值
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


//二进制文件//?

//#define SIZE 5
//int main()
//{
//	double a[SIZE] = {1.0,2.0,3.0,4.0,5.0};
//	double b = 0;
//	//double b[SIZE] = {0};
//	size_t ret_code = 0;
//	FILE* pf = fopen("test.bin","wb");		//二进制
//	if(pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	fwrite(a,sizeof(*a),SIZE,pf);	//写double的数组
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("test.bin","rb");
//	while((ret_code=fread(&b,sizeof(*a),1,pf))>=1)		//while((ret_code=fread(&b,1,8,pf))>=8)
//	{
//		//printf("%d",ret_code);
//		//printf("\n");
//		printf("%0.2lf\n",b);		//打印小数点后两位
//	}
//	if(ferror(pf))
//	{
//		perror("Error reading test.bin");
//	}
//	else if(feof(pf))
//	{
//		printf("read test.bin success\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
