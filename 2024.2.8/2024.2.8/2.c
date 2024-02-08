#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求0-100000所有是水仙花数
int Mi(int x, int y)
{
	if (y != 0)
	{
		return x * Mi(x, y - 1);
	}
	else return 1;
}
int shui(int j)
{
	int b = 0;
	int e = j;
	int n = 1;
	for (b = j; b / 10 != 0;b = b / 10)
	{
		n++;
	}
	int a = 0;
	int c = 0;
	int d = 0;
	for (a = 0; a < n; a++,j /= 10)
	{
		c = Mi(j % 10, n);
		d += c;
	}
	if (d == e)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (shui(i))
		{
			printf("%d\n", i);
		}
	}
	return 0;
}