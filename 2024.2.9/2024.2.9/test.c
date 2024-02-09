#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i = 1;
	int k = 1;
	while(i)
	{
		int left = 1;
		int right = 2 * n - 1;
		int line = (right - (2 * i - 1)) / 2;
		for (left = 1; left <= right; left++)
		{
			if (left <= line ||left>right-line)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
		if(k==n)
		{
			i--;
		}
		if (k < n)
		{
			if (i < n)
			{
				i++;
			}
			k++;
		}	
	}
	return 0;
}
//数组方法int left = 1;
//int right = 2 * n - 2;
//char arr[] = { 0 };
//int j = 0;
//while (j <= right)
//{
//	arr[j] = ' ';
//	j++;
//}
//arr[right + 1] = '\0';
//while (left <= right)
//{
//	if (right - left <= 2 * i - 1)
//	{
//		arr[right] = '*';
//		arr[left] = '*';
//	}
//	left++;
//	right--;
//	if (left > right)
//	{
//		printf("%s\n", arr);
//		break;
//	}