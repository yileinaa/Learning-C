#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 8;
	int l = 0;
	int s = sizeof(arr) / sizeof(arr[0]);
	int r = s - 1;
	
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (k < arr[mid])
		{
			r = mid - 1;
		}
		else if (k > arr[mid])
		{
			l = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
	}
	if (l > r)
		printf("�Ҳ���");
	/*for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");*/
	return 0;
}