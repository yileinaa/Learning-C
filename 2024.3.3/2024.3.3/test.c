#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//�ļ�
#include <string.h>//�ļ�
#include <errno.h>
int main()
{
	FILE* pf = fopen("test.txt", "w"); 
	FILE* pf2 = fopen("C:\\Users\\14633\\Desktop\\qw.txt", "r"); 
	if (pf2 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}