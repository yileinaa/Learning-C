#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char a = 'a';
	char* p = &a;
	*p = 'z';
	printf("%d", sizeof(p));
	return 0;

}