#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��߷�����ͷ�֮��
int main()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	int j = max - min;
	printf("%d", j);
}