#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int a = 20;
//    char* b = &(char)a;//�ֽ�����С��ģʽ��
//    *b = 1;
//    printf("%d", a);
//    return 0;
//}
//�жϴ��С��
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
	return 0;
}