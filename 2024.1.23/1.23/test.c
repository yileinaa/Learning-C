#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//const-������ const int __ = __;
//	const int n = 10;
//	int arr[10] = { 0 };
//}
//#define MAX 10���峣��

enum Sex
	//����ö�ٳ���
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

