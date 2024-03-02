#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct S
{
	int data[1000];
	int num;
};
void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", ss.data[i]);
	}
	printf("%d\n", ss.num);
}

void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", ps->data[i]);
	}
	printf("%d\n", ps->num);
}

int main()
{
	struct S s={{1,2,3,4},100 };
	print1(s);
	print2(&s);//省空间，建议用
	return 0;
}