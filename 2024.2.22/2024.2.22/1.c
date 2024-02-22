#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[] = "abc";
	char arr2[] = "abc";
	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
		printf("<\n");
	else if (ret == 0)
		printf("==\n");
	else if (ret > 0)
		printf(">\n");
	char arr[] = "ssss";
	strncpy(arr, "ww",9);//若超出字符串长度补'0'
	strncmp(arr, "ww",9);//比较前n个
	strncat(arr, "ww",9);
	printf("%s", arr);
	return 0;
}