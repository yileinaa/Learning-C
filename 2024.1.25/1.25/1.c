#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//char p = 's';
	//	while ((p = getchar()) != EOF)//EOF��ctrl+zʵ��
	//	{
	//		putchar(p);
	//	}

	int ch = 0;
	char password[20] = { 0 };
	printf("����������");
	scanf("%s", password);//���鲻��Ҫ��ַ��,scanfֻ���߿ո�ǰ
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��");
	char a = getchar();
	if (a == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("����ȷ��");



	return 0;

}