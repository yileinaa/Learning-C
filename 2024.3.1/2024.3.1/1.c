#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����壨�����壩
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
//		printf("С��");
//	}
//	else
//		printf("���");
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