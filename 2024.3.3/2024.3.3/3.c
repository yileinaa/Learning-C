#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ļ���λָ��
fseek(pf, 2, SEEK_SET);//SEEK_SET��ʼ  SEEK_CUR����  SEEK_ENDĩβ
ftell(pf);//����ƫ����
rewind(pf);//ָ��ص���ʼλ��