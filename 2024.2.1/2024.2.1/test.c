#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int s = 7;
	//int a = s << 2;//���Ʒ��������ֵ��2
	int b = s >> 1;
	//���Ʒ�������λ�����ţ��߼���λ��0��vs���ú���
	printf("%d", b);
	return 0;


int main()
{
	int a = 3;
	int b = 4;
	//a^a=0;0^b=b;�����Ͻ�����a^a^b==a^b^a==b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	//Ч�ʵͣ������Ա���������������ڸ�����
}