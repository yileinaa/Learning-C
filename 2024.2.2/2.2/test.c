#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3,d = 4;
	////i = a++ && ++b && d++;&&��ٲ������ұߣ�||���治�����ұ�
	i = a++ || ++b || d++;
	printf("i=%d,a=%d,b=%d,c=%d,d=%d", i,a,b,c,d);
	//arr[7]==*(arr+7)==*(7++arr)==7[arr];���ʿ��ã���ʼ��������
	//char a = 1;
	//printf("%d", sizeof(float));
	return 0;

}