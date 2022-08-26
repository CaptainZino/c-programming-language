#define _CRT_SECURE_NO_WARNINGS 1
//static int a = 10;	//由static修饰的全局静态变量作用域为本文件，在其他文件中即使用extern声明也无法使用
//static修饰的全局变量或局部变量均存储于静态区，const修饰的全局变量存储于常量区，const修饰的局部变量存储于栈中
int a = 10;