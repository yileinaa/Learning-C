#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
/*int main()
{
	char arr1[] = {'n', 'i', 'u', 'b', 'i',  0};//"\0"字符串结束标志补或"\0"
//字符构成字符串
	char arr2[] = "ss";//\0隐藏在字符串末尾
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//不加零为随机值
	printf("%c\n", '\'');//\ 转义符，多加一个斜杠转化为字符
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
	printf("秋高气爽\n"); 
	printf("莫名其妙（1/0）>:");
	scanf("%d", &input);
		if (input == 1)
			printf("12334");
		else
			printf("56778");*/

	/*int line = 0;
	printf("666\n");
	while (line < 20000)
	{
		printf("敲一个代码%d\n", line);
		line++;
	}
	printf("敲够了");
	return 0;*/
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum=%d", sum);
	return 0;
}

