#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_prime(int x)
{
	int y = 1;
	for (y = 2; y < x; y++)
	{
		int z = x % y;
		if (z == 0)
		{
			return 0;
			break;
		}
		if (y == x - 1)
		{
			return 1;
			break;
		}
	}

}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;//printf返回值是一个整型，是打印的字符的个数
//}