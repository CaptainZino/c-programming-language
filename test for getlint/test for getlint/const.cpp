#define _CRT_SECURE_NO_WARNINGS 1
extern const int a = 10;  //c++中const修饰的变量默认为内部链接属性，外部文件要使用，需在定义时用extern修饰，扩大其作用域