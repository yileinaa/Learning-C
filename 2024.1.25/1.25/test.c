#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//
//int main()
//{
//	struct Book b1 = { "niubi", 666 };
//	strcpy(b1.name, "C++");
//	struct Book* p = &b1;
//	printf("%s%d", p->name, (*p).price);
//	return 0;
//
int	main()
{
	/*int a = 1;
	while (a < 100)
	{
			printf("%d\n", a);
		    a+=2;
	}*/
	int day = 0;
	scanf("%d", &day);
	switch(day)
	{
	//case 1://必须整型常量
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;//跳出

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default://default与case无先后关系
		printf("输入错误");
		break;
	}

	return 0;
}