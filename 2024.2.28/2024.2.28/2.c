#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#pragma once
//��ֹͷ�ļ������Ӧ��
//�޸�Ĭ�϶�����
#pragma pack(4)
struct s
{
	int i;
	double d;
};
#pragma pack()//�ָ�


//�ṹ���С����������������
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	//offsetof//macro ��
//	printf("%d\n", offsetof(struct s1,c1 ));
//	printf("%d\n", offsetof(struct s1,i ));
//	printf("%d\n", offsetof(struct s1,c2 ));//����������û��Ĭ�϶�����
//	return 0;
//}