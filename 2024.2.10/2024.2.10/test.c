#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int a = 20;
//    char* b = &(char)a;//字节序安排小端模式；
//    *b = 1;
//    printf("%d", a);
//    return 0;
//}
//判断大端小端
int main()
{
	int a = 1; 
	char* b = &(char)a;
	*b = 2;
	if(a)
	return 0;
}