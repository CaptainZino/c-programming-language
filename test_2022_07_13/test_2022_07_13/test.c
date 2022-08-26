#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdarg.h>
#include <malloc.h>
#include <string.h>

//int add(int a,...)
//{
//	int sum = 0;
//	va_list pa;
//	va_start(pa,*(((char*)(&a))-4));  //让pa指向参数列表的起始位置
//	sum = va_arg(pa,int)+va_arg(pa,int);  //4?	//va_arg为宏，不是函数
//	printf("%d\n",va_arg(pa,int));
//	printf("%d\n",va_arg(pa,int));
//	printf("%d\n",va_arg(pa,int));
//	printf("%d\n",sum);
//	va_end(pa);
//	return sum;
//
//}
//int main()
//{
//	//printf("%d\n",add(1,2,3));
//	add(1,2,3,4);
//	return 0;
//}

//#define _________ }
//    #define ________ putchar
//    #define _______ main
//    #define _(a) ________(a);
//    #define ______ _______(){
//    #define __ ______ _(0x48)_(0x65)_(0x6C)_(0x6C)
//    #define ___ _(0x6F)_(0x2C)_(0x20)_(0x77)_(0x6F)
//    #define ____ _(0x72)_(0x6C)_(0x64)_(0x21)
//    #define _____ __ ___ ____ _________
//    #include<stdio.h>
//    _____

//#include <stdio.h>
//main()
//{ 
//	putchar(0x48);
//	putchar(0x65);
//	putchar(0x6C);
//	putchar(0x6C);
//	putchar(0x6F);
//	putchar(0x2C);
//	putchar(0x20);
//	putchar(0x77);
//	putchar(0x6F);
//	putchar(0x72);
//	putchar(0x6C);
//	putchar(0x64);
//	putchar(0x21); 
//}


//int main()  
//{      
//    int a=1;      
//    switch(a)      
//    {   
//		int b=20; 
//		//switch-case语句会把变量b的初始化直接就跳过了。所以，程序会输出一个随机的内存值
//        case 1: 
//            printf("b is %d\n",b);
//            break;
//        default:
//            printf("b is %d\n",b);
//            break;
//    }
//    return 0;
//}


//int main()  
//{
//    int i;
//    i = 10;
//    printf("i : %d\n",i);
//    printf("sizeof(i++) is: %d\n",sizeof(i++));
//	//sizeof不是一个函数，是一个操作符，其求i++的类型的size，这是一件可以在程序运行前（编译时）完成的事情\
//	所以，sizeof(i++)直接就被4给取代了，在运行时也就不会有了i++这个表达式
//    printf("i : %d\n",i);
//    return 0;
//}


//#define SIZEOF(arr) (sizeof(arr)/sizeof(arr[0]))
//#define PrintInt(expr) printf("%s:%d\n",#expr,(expr))  //printf("%s:%d\n","expr",(expr))	//pot[iS]
//int main()
//{
//    /* The powers of 10 */
//    int pot[] = {
//                    0001,
//                    0010,
//                    0100,
//                    1000
//                };
//    int i;
//    for(i=0;i<SIZEOF(pot);i++)	//C/C++中，以0开头的数字都是八进制的
//	{
//        PrintInt(pot[i]);
//	}   
//    return 0;
//}

//int main()  
//{
//    int i = 6;
//    if( ((++i < 7) && ( i++/6)) || (++i <= 9))
//        ;
//	//短路求值
//	//对于（条件1 && 条件2），如果“条件1”是false，那“条件2”的表达式会被忽略了
//	//对于（条件1 || 条件2），如果“条件1”为true，那“条件2”的表达式则被忽略了
//    printf("%d\n",i);
//    return 0;
//}


int main()  
{ 
    int a=3, b = 5;
    printf(&a["Ya!Hello! how is this? %s\n"], &b["junk/super"]);
    //a[i] = *(a+i) = *(i+a) = i[a]
	//"Ya!Hello! how is this? %s\n"[a] = Y的地址+3然后解引用：Hello! how is this? %s\n
    printf(&a["WHAT%c%c%c  %c%c  %c !\n"], 1["this"],
        2["beauty"],0["tool"],0["is"],3["sensitive"],4["CCCCCC"]);

    return 0;  
}

//int main()  
//{ 
//    char dummy[80];
//    printf("Enter a string:\n");
//    scanf("%[^r]",dummy);	//"%[^r]"：遇到'r'字符结束
//    printf("%s\n",dummy);
//    return 0;
//}

//#define PrintInt(expr) printf("%s : %d\n",#expr,(expr))
//int FiveTimes(int a)  
//{
//    int t;
//    t = a<<2 + a;	//位操作的优先级低于加法	//改为：t = (a<<2) + a;
//    return t;
//}
//int main()  
//{
//    int a = 1, b = 2,c = 3;
//    PrintInt(FiveTimes(a));
//    PrintInt(FiveTimes(b));
//    PrintInt(FiveTimes(c));
//    return 0;
//}


//#define      M 002354l
//#define     A   000644l
//#define    G     000132l
//#define     I   000322l
//#define      C 000374l
//#define                a ;
//#define               b for
//#define              c    ++
//#define             d       %
//#define            e       int
//#define           f           ,
//#define          g             -
//#define         h             011
//#define        i                 =
//#define       j                   {
//#define      k                     )
//#define     l                    '\n'
//#define    m                      main
//#define    n                         <
//#define     o                       }
//#define      p                     >
//#define       q                  &&
//#define        r                 (
//#define         s              ||
//#define          t             ?
//#define           u     putchar
//#define            v      void
//#define             w     '*'
//#define              x     :
//#define               y ' '
//#define                _ /
//#define           C_O_O_L return
//                   e u r e k a
//                         e
//                        m r
//                       v k j
//                      j j j j
//                     j j j j j
//                    j j j j j j
//                   j j j j j j j
//                  j e z a b r z i
//                 M _ A _ G _ I _ C
//                a z n G a u r z d h
//               + z _ h p M _ A q z d
//              h + z _ h n M _ G q z _
//             h n z d h + M _ I q z _ h
//            p z d h g M _ C t w x y k f
//           z d h g h + 1 s u r l k f z c
//          k a u r l k a j j j j j j j j j
//         j j C_O_O_L M _ A _ G _ I _ C a o
//        o o o o o o o o o o o o o o o o o o
//                      o o o o
//                      o o o o
//                      o o o o
//                      o o o o


//int main()
//{
//	int a[10] = {0};
//	int b = 6;
//	char arr[20] = {0};
//	1[a] = 5;
//	strcpy(arr,&b["hello there"]);
//	printf(arr);
//	printf("\n");
//	printf("%d\n",1[a]);
//	return 0;
//}

