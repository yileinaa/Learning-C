#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
 
int main() 
{
	const char* sep = "@.";
	char email[] = "1463343010@qq.com";
	//char* sp = strtok(email, sep);
	/*printf("%s\n", sp);
	sp = strtok(NULL, sep);
	printf("%s\n", sp);
	sp = strtok(NULL, sep);*///·µ»Ø¿ªÍ·
	//printf("%s\n", sp);
	char* ret = NULL;
	for (ret = strtok(email, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}