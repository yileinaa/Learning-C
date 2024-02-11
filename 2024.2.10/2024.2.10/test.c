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
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}