#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int len(char* s)
{
	char* start = s;
	while (*s != 0)
	{
		s++;
	}
	return (s - start);
}//指针允许与数组最后元素后一个指针比较，不允许首元素前一个


int main()
{
	char arr[] = "niubi666";
	int a = len(arr);
	printf("字符串中字符的个数=%d", a);
	return 0;

}
