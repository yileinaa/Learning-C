#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
char* my_strcat(char* des, const char* src)
{
	char* origin = des;
	while (*des != '\0')
	{
		des++;
	}
	while (*des++ = *src++) 
	{
		;
	}
	return origin;
}
int main()
{
	char name[4] = "tang";
	my_strcat(name , "peng");//×·¼Ó×Ö·û´®
	printf("%s", name);
	return 0;
}