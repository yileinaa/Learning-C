#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void cal(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("输入两个数");
	scanf("%d%d", &x, &y);
	ret = p(x, y);
	printf("%d", ret);
}