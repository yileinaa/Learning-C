#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Mi(int x,int y)
{
	if (y != 0)
	{
		return x * Mi(x, y - 1);
	}
	else return 1;
}
int main()
{
	int a = 2;
	int n = 4;
	int c = Mi(a,n);
	printf("%d", c);
	return 0;
}