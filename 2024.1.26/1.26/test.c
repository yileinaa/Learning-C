#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char x[] = "niubi";
//	memset(x, 'f', 2);
//	printf("%s", x);
//	return 0;
//}
//��ӡ100-200����


#include "hs.h"//���Լ�����˫����
    

int main()
{
		int i = 0;
		for (i = 100; i <= 200; i++)
		{
			if (is_prime(i) == 1)
				printf("%d", i);

		}
		return 0;
}
