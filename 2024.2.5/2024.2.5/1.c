#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int len(char* s)
{
	char* start = s;
	while (*s != 0)
	{
		s++;
	}
	return (s - start);
}//ָ���������������Ԫ�غ�һ��ָ��Ƚϣ���������Ԫ��ǰһ��


int main()
{
	char arr[] = "niubi666";
	int a = len(arr);
	printf("�ַ������ַ��ĸ���=%d", a);
	return 0;

}
