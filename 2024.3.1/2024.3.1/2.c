#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//��̬�ڴ����
int main()
{
	int arr[10] = { 0 };
	int* p = (int*)malloc(INT_MAX);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	free(p);
	p = NULL;
	return 0;
}
//malloc�俪��ʧ�ܷ��ؿ�ָ��
//calloc
//realloc
//free         �����˳��Զ������ڴ�ռ�
//ջ�����ֲ�������ʽ����
//��������������
//��̬����ȫ�ֱ���