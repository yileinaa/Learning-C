#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));*///错误码
	//errno，c语言设置的一个全局的错误码存放的变量可直接用
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	else
		return 0;
	return 0;
}