#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//x86-32位环境，sizeof返回无符号整型%zu
//指针类型决定被解引用是访问几个字节,决定指针加1跳过几个字节
int main()
{
	int a = 100;
	char* b = (char) & a;
	printf("%d",sizeof((*b)));
}