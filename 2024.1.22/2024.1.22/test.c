#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	//int sum = 0;
	scanf("%d%d", &num1, &num2);
	int sum = 0;
	extern int a;
    sum = num1 + num2;
	printf("%d\n", sum);
	printf("%d\n", a);
	return 0;

}
//float g = 99.5f;//小数默认为双精度，加f标为单精度
