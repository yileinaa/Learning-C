#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ö�ٳ���
enum Day
{
	Mon=1,//0
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun,
};
int main()
{
	enum Day a = Fri;
	printf("%d", a);
	return 0;
}