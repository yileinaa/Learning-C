#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//删除数组指定数字
int main()
{
	printf("请输入数列长度n:>");
	int n = 0;
	scanf("%d", &n);
	int arr[50];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i <= n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}