#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p2,p3;
int main()
{
	struct Peo p1 = { "TP","123456789101","Man",170 };
	struct Peo* s = &p1;
	printf("%s", s->name);
	return 0;
}