#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(NULL));
	int y;
	for (y = 100; y != 0; y--)
	{
		int x = rand() % 2 + 1;
		printf("%d\n", x);
	}
	return 0;
}