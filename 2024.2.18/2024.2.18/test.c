#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	(*(void(*)())0)();//函数调用，调用的是0作为地址处的函数
	//void(*)()是无参数返回类型空的函数指针类型
	void(*signal(int, void(*)(int)))(int);
	return 0;
	//typedef void(*pf_t)(int)；
} 