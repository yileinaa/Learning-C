#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//offsetof
#include <stddef.h>
#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)//��Ա��0��ʼ����ƫ��������0��Ϊ�ṹ���ַǿ��ת��

struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct S s = { 0 };
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}