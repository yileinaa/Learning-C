#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//小乐乐走台阶
int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int x= fib(n);//计算走n个台阶走法
	printf("共%d种走法", x);
	return 0;
}