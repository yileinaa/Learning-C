#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int s = 7;
	//int a = s << 2;//左移符相等于整值乘2
	int b = s >> 1;
	//右移分算术移位补符号，逻辑移位补0，vs采用后者
	printf("%d", b);
	return 0;


int main()
{
	int a = 3;
	int b = 4;
	//a^a=0;0^b=b;异或符合交换率a^a^b==a^b^a==b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	//效率低，但可以避免溢出，不能用于浮点数
}