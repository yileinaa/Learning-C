#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//debug调试版本，release发布版本没有调试信息优化空间占用小
//F9设置断点F10逐过程F11逐语句
//void test()
//{
//	printf("haha");
//}
//void test1()
//{
//	test();
//}
//void test2()
//{
//	test1();
//}
//int main()
//{
//	test2();
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}
//int main()
//{
//	int p;
//	scanf("%d", &p);
//	int i;
//	int j;
//	int b = 0;
//	for (j = p; j > 0; j--)
//	{
//		int a = 1;
//		for (i = 1; i <= j; i++)
//		{
//			a = a * i;
//		}
//		b = b + a;
//	}
//	printf("%d", b);
//	return 0;
//}strcpy会将源字符串\0也拷贝过去strcpy(*,*)