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
	//case 1://�������ͳ���
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;//����

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default://default��case���Ⱥ��ϵ
		printf("�������");
		break;
	}

	return 0;
}