#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 5
int main()
{
	int arr[N];
	int* p = arr;
	int i = 0;
	for (p = &arr[0]; p< &arr[N];) 
	{
		*p++ = 1;
	}
	for (p = &arr[0],i = 0; i < N; i++)
	{
		*(p + i) = 2;
	}
	printf("%d", arr[1]);
	return 0;
}