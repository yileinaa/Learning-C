#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char* p = "abcdefg";//��a�ĵ�ַ�������ַ������ܱ���
	//*p = 'w';
	char arr[] = "adsasdaa";
	char(*p2)[] = &arr;
	printf("%s\n", arr);//��ӡ�ַ�������ַ
	return 0;
}
//������ͨ���׵�ַ
//����1.sizeof 2.&����������������ĵ�ַ+1������������