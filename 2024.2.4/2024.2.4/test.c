#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//x86-32λ������sizeof�����޷�������%zu
//ָ�����;������������Ƿ��ʼ����ֽ�,����ָ���1���������ֽ�
int main()
{
	int a = 100;
	char* b = (char) & a;
	printf("%d",sizeof((*b)));
}