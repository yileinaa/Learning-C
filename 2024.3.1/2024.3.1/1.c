#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//联合体（共用体）
//int check_sys()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1; 
//	return u.c;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(u));
//	u.a = 0x11223344;
//	u.c = 0x00;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//}
union Un
{
	char arr[5];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union Un));
	return 0;
}