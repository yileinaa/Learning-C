#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "welcome to GXU!!!!!!";
	char arr2[] = "####################";
	int l = 0;
	//int r = sizeof(arr1) / sizeof(arr1[0]) - 1;
	int r = strlen(arr1) - 1;
while(l<=r)
{
	arr2[l] = arr1[l];
	arr2[r] = arr1[r];
	printf("%s\n", arr2);
	Sleep(100);
	l++;
	r--; 
	//if (l < r)
		//system("cls");
}
	return 0;
}//==不能判断两个字符串相等，用库函数strcmp（"xxx","yyy"相减）== 0;