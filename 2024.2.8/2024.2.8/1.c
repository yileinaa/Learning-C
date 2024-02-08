#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Çóa +aa +aaa +aaaa +aaaaa
int main()
{
	int a;
	int n;
	scanf("%d%d", &a, &n);
	int i;
	int sum = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}