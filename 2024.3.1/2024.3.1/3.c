#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//calloc���ʼ��Ϊ0
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p + 1));	
	}
	free(p);
	p = NULL;
	return 0;
}
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = i + 1;
	}
	//����
	int*ptr=(int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
}
//�ڴ��
//Ƶ���������Ч���½����ڴ���Ƭ��
//realloc����NULLָ����Ե�mallocʹ��