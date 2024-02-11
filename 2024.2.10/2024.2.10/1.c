#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	unsigned char c = -1;
	signed char a= -1;
	printf("%d\n%d\n", a,c);//%uÎÞ·ûºÅÊý 
	char b = -128;
	printf("%u\n", b);
	signed int i = -20;
	unsigned int j = 10;
	printf("%d", i+j);
	return 0;
}/*10000000 00000000 00000000 00010100
 11111111 11111111 11111111 11101100
 00000000 00000000 00000000 00001010 
 11111111 11111111 11111111 11110101
 10000000 00000000 00000000 00001010*/
