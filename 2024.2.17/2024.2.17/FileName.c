#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//��ά���鴫�Σ��п�ʡ���в��У���ά������Ԫ���ǵ�һ�е�ַ -
//ֻ��������ָ�����  void(*arr)[]
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
	//printf("%p\n", &test);//����Ҳ�е�ַ
	//printf("%p\n", test);//������˵�������
	int (*p)(int, int) = &add;
	int ret = (*p)(2, 3);//���ú���,������Ҳ��
	mm(add);
	return 0;
}