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
int main()
{
	int a = 1; 
	char* b = &(char)a;
	*b = 2;
	if(a)
	return 0;
}