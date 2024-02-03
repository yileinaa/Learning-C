#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求整数二进制1的个数32bit
int main()
{
	int a = 4;
	int i = 0;
	int c = 0;
	while (i < 32)
	{
		int b = a & 1;
		if (b == 1)
		{
			c++;
		}
		i++;
		a = a >> 1;
	}
	printf("%d", c);
	return 0;
}

