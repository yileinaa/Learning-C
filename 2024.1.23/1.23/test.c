#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//const-常属性 const int __ = __;
//	const int n = 10;
//	int arr[10] = { 0 };
//}
//#define MAX 10定义常量

enum Sex
	//定义枚举常量
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = FEMALE;
	printf("%d\n", s);
	printf("%d\n", s);
	printf("%d\n", SECRET);
	return 0;
}

