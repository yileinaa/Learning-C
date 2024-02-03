#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//1计算数的阶乘
//int main()
//{
//	int a = 0;
//	int b = 1;
//	scanf("%d", &a);
//	do
//	{
//		b = b * a;
//		a -= 1;
//	} while (a > 0);
//	printf("%d", b);
//	return 0;
//}

//计算1至10的阶乘和
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int d = 0;
	for (a = 1; a<11 ;a++)
	{
		d = a;
		for (a = a; a > 0; a--)
		{
			b = b * a;
		}
		a = d;
		c = c + b;
		b = 1;
	}
	printf("%d", c);
	return 0;
}
