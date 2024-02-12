#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void TP(int* arr1,int* arr2,int b)
{
	int a = 0;
	int j;
	int r = b;
	for (j = 0;j <= r; j++)
	{
		if (*(arr1+j) % 2 == 1)//ÆæÊý
		{
			arr2[a] = arr1[j];
			a++;
		}
		if (*(arr1 + j) % 2 == 0)//Å¼Êý
		{
			arr2[b] = arr1[j];
			b--;
		}
	}
}
int main()
{
	int arr_x[10] = { 1,2,3,4,5,6,7,8,9,9};
	int arr_y[10] = { 0 };
	int q = sizeof(arr_x) / sizeof(arr_x[0]) - 1;
	TP(arr_x,arr_y,q);
	int i;
	for (i = 0; i <= q; i++)
	{
		printf("%d", arr_y[i]);
	}
	printf("\n");
	return 0;
}