#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
/*int main()
{
	char arr1[] = {'n', 'i', 'u', 'b', 'i',  0};//"\0"�ַ���������־����"\0"
//�ַ������ַ���
	char arr2[] = "ss";//\0�������ַ���ĩβ
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//������Ϊ���ֵ
	printf("%c\n", '\'');//\ ת��������һ��б��ת��Ϊ�ַ�
	printf("%c\n", '\32');
	return 0;
}*/
 Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	/*int input = 0;
	printf("�����ˬ\n"); 
	printf("Ī�����1/0��>:");
	scanf("%d", &input);
		if (input == 1)
			printf("12334");
		else
			printf("56778");*/

	/*int line = 0;
	printf("666\n");
	while (line < 20000)
	{
		printf("��һ������%d\n", line);
		line++;
	}
	printf("�ù���");
	return 0;*/
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum=%d", sum);
	return 0;
}

