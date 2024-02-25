#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
	//srand((unsigned int)time(NULL));
	//int y;
	//for (y = 100; y != 0; y--)
	//{
	//	int x = rand() % 2 + 1;
	//	printf("%d\n", x);
	//}
	char b1[10] = "qweqwe";
	char b2[10] = "ssssss";
	char* b11 = b1;
	char* b22 = b2;
	while (*b11++ = *b22++)
	{
		;
	}
	printf("%s", b1);
	return 0;
}