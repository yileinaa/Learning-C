#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//位段
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;//节省空间，先低位再高位存 
};