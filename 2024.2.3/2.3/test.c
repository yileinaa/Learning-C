#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//С������̨��
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
	int x= fib(n);//������n��̨���߷�
	printf("��%d���߷�", x);
	return 0;
}