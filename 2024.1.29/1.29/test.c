#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void min_arr(int* i,int* x)
{
	int* q = i;
	int y = 0;
	for (q = i +1; q <= x; q = q + 1)
	{
		if ((*i) > (*q))
		{
			 y = (*i);
			(*i) = (*q);
			(*q) = y;
		}
	}
	if (i+1 != x)
	{
		min_arr(i+1,x);
	}
}

int main()
{
	int i = 0;
	int arr[] = { 5,3,6,8,10,2,1,7,9,4,14,235,34 };
	int y = sizeof(arr) / sizeof(arr[0]) - 1;
	min_arr(arr,arr + y);
	for (i = 0; i <= y; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}