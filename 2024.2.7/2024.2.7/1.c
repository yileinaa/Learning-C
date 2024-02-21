#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* des,const char* src)
{
	char* s = src;
	assert(src != NULL);
	assert(des != NULL);//断言
	while ( *des++= *src++)
	{
		;
	}
	return s;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxxxs";
	char arr2[] = "hello kitty";
	char* p = NULL;
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}//指针可更改const变量
//const*修饰指针意思为指针指向对象不能通过指针改变但指针自身还能修改
//*const修饰意思是指针指向对象不能通过指针更改，指针也不能修改