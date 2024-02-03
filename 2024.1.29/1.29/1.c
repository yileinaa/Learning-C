#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1, 23, 54, 7 };
	char arr2[] = "sdadsasf";
    printf("%d\n", sizeof(arr2[0]));
	char* x = arr2;
	char* y = arr2;
	y = x + 4;
	for (x = arr2; x < y; x = x + 1)
	{
		printf("%p\n", x);
	}
	return 0;
}