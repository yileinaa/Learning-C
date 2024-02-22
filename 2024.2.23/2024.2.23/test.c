#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	while (*str1 != '\0')
	{
		char* ori = str2;
		while (*str1 != *ori && *str1 == '\0')
		{
			str1++;
		}
		if (*str1 == '\0')
			break;
		int n = 0;
		while (str1[1] == ori[1])
		{
			str1++;
			ori++;
			n++;
		}
		if (ori[1] == '\0')
			return str1 - n;
		else
			str1++;
	}return NULL;
}
//kmp算法
int main()
{
	char email[] = "1463343010@qq.com";
	char substr[] = "ss";
	//char* ret = strstr(email, substr); //返回找到的首地址
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("不存在\n");
	}
	else 
	{
		printf("%s\n",ret);
	}
	return 0;
}