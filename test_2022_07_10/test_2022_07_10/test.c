#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*****�ļ�����*****/

//10000�Զ����ƺ�ASCALL����ʽ�浽����У�

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
//	//���ļ�test.txt
//	//fopen("test.txt","r");	//test.txt�ڵ�ǰ·����
//	//fopen("./test.txt","r");	//test.txt�ڵ�ǰ·����
//	//fopen("../test.txt","r");	//test.txt����һ��·����
//
//	//fopen("D:\\Learn something\\workspace\\sourcefile for C\\test_2022_07_10\\test_2022_07_10\\test.txt","r");  // \\��ֹת���ַ�
//	//fopen("D:/Learn something/workspace/sourcefile for C/test_2022_07_10/test_2022_07_10/test.txt","r");		  // /�ȼ���\\
//	//����·��
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
//      //fputc():�ַ��������
//		fputc('h',pf);		//��pfά�����ļ���д����
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
//        //fgetc():�ַ����뺯��
//		printf("%c",fgetc(pf));		//��ȡpfά�����ļ��������
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

//����-��׼�����豸-stdin
//��Ļ-��׼����豸-stdout
//���̺���Ļ��һ�������Ĭ�ϴ򿪵����豸
//�����Ĭ�ϴ�stdin��stdout��stderr�������豸

//int main()
//{
//	int i = fgetc(stdin);		//�ӱ�׼�������ļ�����������  //fgetc���������е�������
//	fputc(i,stdout);			//��i�������ע���������Ļ��  //fputc���������е������
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
//	puts(buf);				//��buf�����stdout
//	fgets(buf,1024,pf);		//�ı������뺯��������������������
//	//printf("%s\n",buf);
//	puts(buf);				//puts()��ӡ�����ݺ���Զ�����
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
//	fputs("hello\n",pf);		//�ı���������������������������
//	fputs("there\n",pf);
//	//printf("%s\n",pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = {0};
//	fgets(buf,1024,stdin);		//�Ӽ��̶�ȡһ���ı���Ϣ
//	fputs(buf,stdout);			//��buf�д洢���ı���Ϣ��ӡ����Ļ��
//
//	gets(buf);					//�ӱ�׼�������ж�ȡһ������  //�����buf��С�����׻������  //������fgets����
//	puts(buf);					//����ȡ�����������׼�����  //�����buf��С�����׻������  //������fputs����
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
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);		//��ʽ��������������������������  //��ʽ�ο�printf()��printfĬ���������Ϊstdout
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
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),&(s.arr));		//��ʽ�����뺯��������������������  //��ʽ�ο�scanf()��scanfĬ���������Ϊstdin
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
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),&(s.arr));		//�ȼ���scanf("%d %f %s",&(s.n),&(s.score),&(s.arr));
//	fprintf(stdout,"%d  %.2f  %s\n",s.n,s.score,s.arr);			//�ȼ���printf("%d  %.2f  %s\n",s.n,s.score,s.arr);
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
//	sprintf(buf,"%d  %f  %s\n",s.n,s.score,s.arr);		//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	printf(buf);
//	sscanf(buf,"%d  %f  %s\n",&(temp.n),&(temp.score),&(temp.arr));  //��buf�ж�ȡ��ʽ�������ݵ�temp��
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
//	struct S s = {"����",25,99};
//	FILE* pf = fopen("test.txt","wb");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fwrite(&s,sizeof(struct S),1,pf);		//��������ʽ��pfά�����ļ���д������
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
//	fread(&tmp,sizeof(struct S),1,pf);		//��������ʽ��pfά�����ļ��ж�������
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
//	//SEEK_CUR:�ļ�ָ��ĵ�ǰλ��;SEEK_END:�ļ���ĩβ;SEEK_SET���ļ�����ʼλ��
//	//fseek(pf,3,SEEK_CUR);		//��λ�ļ�ָ��
//	fseek(pf,-2,SEEK_END);		//��λ�ļ�ָ��
//	ch = fgetc(pf);				//��ȡ��ǰָ��ָ����ַ�
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
//	fseek(pf,-2,SEEK_END);		//��λ�ļ�ָ��
//	pos = ftell(pf);			//��ȡ�ļ�ָ�������ʼλ�õ�ƫ����
//	printf("%d\n",pos);
//	rewind(pf);					//���ļ�ָ��ص���ʼλ��	
//	pos = ftell(pf);			//��ȡ�ļ�ָ�������ʼλ�õ�ƫ����
//	printf("%d\n",pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�ļ��������ж�

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("test.txt","r");
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	i = fgetc(pf);
//	printf("%d\n",i);		//�ļ�Ϊ�գ���ӡEOF(-1)
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//feof():�������䷵��ֵ���ж��ļ��Ƿ���������ǵ��ļ���ȡ������ʱ���жϽ�������Ϊ��ȡʧ�ܶ��������������ļ�ĩβ������
//feof():����ĩβ������ֵ�����򷵻ؼ�ֵ
//�ж��ļ��Ƿ��ȡ��������ȷ�����ǣ�
//�ı��ļ���fgetc()�ķ���ֵ�Ƿ�ΪEOF��fgets()�ķ���ֵ�Ƿ�ΪNULL
//�������ļ���fread()����ֵ�Ƿ�С��ʵ��Ҫ���Ĵ���


//int main()
//{
//	//printf("%s\n",strerror(errno));
//	//strerror:�Ѵ�����errno��Ӧ�Ĵ�����Ϣ���ַ�����ַ����
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

//�ı��ļ�
//int main()
//{
//	int ch = 0;		//ch�����ͱ�����int��������char		//fallible
//	//����ȡ��ascallΪ255(OXFF)���ַ�,fgetc()�᷵��0x000000FF(255)
//	//255����char��Ϊ-1
//	//while((ch=fgetc(pf))!=EOF)�ж�Ϊ�٣���ascall��ֵΪ255���ַ�֮����ַ����޷���ȡ
//	FILE* pf = fopen("test.txt","r");
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


//�������ļ�//?

//#define SIZE 5
//int main()
//{
//	double a[SIZE] = {1.0,2.0,3.0,4.0,5.0};
//	double b = 0;
//	//double b[SIZE] = {0};
//	size_t ret_code = 0;
//	FILE* pf = fopen("test.bin","wb");		//������
//	if(pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	fwrite(a,sizeof(*a),SIZE,pf);	//дdouble������
//	fclose(pf);
//	pf = NULL;
//
//	pf = fopen("test.bin","rb");
//	while((ret_code=fread(&b,sizeof(*a),1,pf))>=1)		//while((ret_code=fread(&b,1,8,pf))>=8)
//	{
//		//printf("%d",ret_code);
//		//printf("\n");
//		printf("%0.2lf\n",b);		//��ӡС�������λ
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
