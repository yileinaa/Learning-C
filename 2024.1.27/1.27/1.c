#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
	Sleep(1000);
}



int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//ตÝน้ 
	print(num);
	return 0;
}