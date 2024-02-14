#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char* p = "abcdefg";//放a的地址，常量字符串不能被改
	//*p = 'w';
	char arr[] = "adsasdaa";
	char(*p2)[] = &arr;
	printf("%s\n", arr);//打印字符串给地址
	return 0;
}
//数组名通常首地址
//例外1.sizeof 2.&数组名，整个数组的地址+1跳过整个数组