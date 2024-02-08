#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//µ¹ÐðÊý×é
int main()
{
	char arr[] = {0};
	gets(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char a;
		a = arr[left];
		arr[left] = arr[right];
		arr[right] = a;
		left++;
		right--;
	}
	printf("%s", arr);
	return 0;
}