#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//#include "Sales_item.h"
using namespace std;

//int main()
//{
//	double num = 0;
//	double sum = 0;
//	//std::string a;
//	while(std::cin>>num)
//	{
//		sum += num;
//	}
//	std::cout<<sum<<std::endl;
//	//std::cout<<sizeof(a)<<std::endl;
//	return 0;
//}

//int main()
//{
//	int *p = (int*)new char[100];
//	if(p == NULL)
//	{
//		std::cout<<"the pointer is null"<<std::endl;
//	}
//	else
//	{
//		*p = 1;
//		std::cout<<p<<std::endl;
//		std::cout<<*p<<std::endl;
//	}
//	delete[] p;
//	std::cout<<p<<std::endl;
//	std::cout<<*p<<std::endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int &b = a;  //ÒýÓÃ
//	int &c = b;
//	c = 100;
//	cout<<a<<endl;
//	return 0;
//}

//int main()
//{
//	Sales_item item1;
//	cout<<item1<<endl;
//	return 0;
//}

//int main()
//{
//	//cout<<"hello"<<endl;
//	int a(6);
//	cout<<a<<endl;
//	return 0;
//}

extern const int a;
int main()
{
	//cout<<a<<endl;
	int arr[100] = {0};
	int *p = nullptr;
	int* &pa = p;
	pa = arr;
	pa[10] = 100;
	cout<<arr[10]<<endl;
	//constexpr int a = 5;
	return 0;
}