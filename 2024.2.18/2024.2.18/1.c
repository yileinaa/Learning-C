#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ���÷�//�����Ƶĺ�������
void menu()
{
	printf("1��2��3��4��\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void cal(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("����������");
	scanf("%d%d", &x, &y);
	ret = p(x, y);
	printf("%d", ret);
}
int main()
{
	int ret,input;
	int x = 0;
	int y = 0;
	menu();
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			cal(add);
			break;
		case 2:
			cal(sub);
			break;
		case 3:
			cal(mul);
			break;
		case 4:
			printf("����������");
			scanf("%d%d", &x, &y);
			ret = div(x, y);
			printf("%d", ret);
			break;
		}
	}while (1);
	return 0;
}