#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fbnq();
int whila();
int main()
{
	int n = 0;
	int x;
	printf("请输入第几个斐波那契数：");
	scanf("%d", &n);
	whila(n);
	return 0;
}
int Fbnq(int y)
{
	if (y == 1 || y == 2)
	{
		return 1;
	}
	if (y > 2)
	{           
		return Fbnq(y - 1) + Fbnq(y - 2);
	}

}
int whila(int w)
{
	if (w > 0)
	{
		printf("%d", Fbnq(w));
		whila(w - 1);
	}
	return 0;

}