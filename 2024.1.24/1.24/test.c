#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void test()
{
	static int a = 0;//��̬�ֲ�������ȷ��a������
	//������ȫ�ֱ�������ı�������ֻ���ڱ�Դ�ļ�ʹ��
	a++;
	printf("%d\n", a);
}
int main()
{
	signed int b = 0;//signed������ typedef int ����;
	while(b < 5)
	{
		test();
		b++;
	}
	return 0;
}