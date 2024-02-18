#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//二维数组传参，行可省，列不行；二维数组首元素是第一行地址 -
//只能用数组指针接受  void(*arr)[]
 void test(int* arr[3])
{
	int i = 2;
	while (i)
	{
		printf("%p\n", arr[i]);
		i--;
	}
}
 int add(int x, int y)
 {
	 int c = x + y;
	 return c;
 }
 void mm(int(*p)(int, int))
 {
	 int a = 3;
	 int b = 5;
	 int sum = (*p)(a, b);
	 printf("%d\n", sum);
}
int main()
{
	int arr[3] = { 1,2,3 };
	//test(arr);
	//printf("%p\n", &test);//函数也有地址
	//printf("%p\n", test);//函数来说两者相等
	int (*p)(int, int) = &add;
	int ret = (*p)(2, 3);//调用函数,不加星也行
	mm(add);
	return 0;
}