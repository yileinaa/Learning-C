#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	(*(void(*)())0)();//�������ã����õ���0��Ϊ��ַ���ĺ���
	//void(*)()���޲����������Ϳյĺ���ָ������
	void(*signal(int, void(*)(int)))(int);
	return 0;
	//typedef void(*pf_t)(int)��
} 