#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("--------1.play  0.exit--------\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	Intboard(board, ROW, COL);//��ʼ��
	DisplayBoard1(board, ROW, COL);
	char ret;
	while (1)
	{
		PlayMove(board, ROW, COL);
		DisplayBoard1(board, ROW, COL);
		ret =Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		PCMove(board, ROW, COL);
		DisplayBoard1(board, ROW, COL);
		char ret = Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ��\n");
	}
	if (ret == '&')
	{
		printf("���Ի�ʤ��\n");
	}
	if (ret == 'e')
	{
		printf("ƽ�֣�");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			  break;
			}
	} while(input);
}


int main()
{
	test();
	return 0;
}