#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//char p = 's';
	//	while ((p = getchar()) != EOF)//EOF按ctrl+z实现
	//	{
	//		putchar(p);
	//	}

	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码");
	scanf("%s", password);//数组不需要地址符,scanf只读走空格前
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）");
	char a = getchar();
	if (a == 'Y')
		printf("确认成功");
	else
		printf("放弃确认");



	return 0;

}