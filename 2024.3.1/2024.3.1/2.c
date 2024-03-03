#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//动态内存管理
int main()
{
	int arr[10] = { 0 };
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	free(p);
	p = NULL;
	return 0;
}
//malloc其开辟失败返回空指针
//calloc
//realloc
//free         程序退出自动回收内存空间
//栈区，局部变量形式参数
//堆区，上述函数
//静态区，全局变量