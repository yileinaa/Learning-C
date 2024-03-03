//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>cakwcansckasnkasmd
void GetMemory(char** p)
{
    *p = (char*)malloc(100);
}
void Test()
{
	char* str = NULL;
	GetMemory(&str);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(str + i) = 's';
	}
	strcpy(str, "hello world");
	printf("%s", str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
//free不能释放一部分，多次释放