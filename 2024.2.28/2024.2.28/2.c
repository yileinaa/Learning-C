#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#pragma once
//防止头文件被多次应用
//修改默认对齐数
#pragma pack(4)
struct s
{
	int i;
	double d;
};
#pragma pack()//恢复


//结构体大小是最大对齐数整倍数
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	//offsetof//macro 宏
//	printf("%d\n", offsetof(struct s1,c1 ));
//	printf("%d\n", offsetof(struct s1,i ));
//	printf("%d\n", offsetof(struct s1,c2 ));//其他编译器没有默认对齐数
//	return 0;
//}