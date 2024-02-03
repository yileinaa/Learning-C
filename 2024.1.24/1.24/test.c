#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void test()
{
	static int a = 0;//静态局部变量，确保a不销毁
	//若修饰全局变量，则改变作用域，只能在本源文件使用
	a++;
	printf("%d\n", a);
}
int main()
{
	signed int b = 0;//signed符号数 typedef int 别名;
	while(b < 5)
	{
		test();
		b++;
	}
	return 0;
}