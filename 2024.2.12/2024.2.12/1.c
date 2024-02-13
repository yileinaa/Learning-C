#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void mix();
int main()
{
	int n, m;
	scanf("%d%d", &n,&m);
	int arr1[11] = { 0 };
	int i;
	for (i = 0; i < n+m; i++)
	{
		scanf("%d", arr1 + i);
	}
	mix(arr1);
	for (i = 0; i < n + m; i++)
	{
		printf("%d", arr1[i]);
	}
	return 0;
}
void mix(int* a)
{
	int x,y;
	for (x = 0; x < 11; x++)
	{
		for (y = x+1; y < 11; y++)
		{
			int b[11] = { 0 };
			if (*(a+x) > *(a+y))
			{
				b[0] = *(a + x);
				*(a + x) = *(a + y);
				*(a + y) = b[0];
			}
		}
	}
}