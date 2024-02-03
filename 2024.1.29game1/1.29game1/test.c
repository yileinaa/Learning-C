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
	Intboard(board, ROW, COL);//初始化
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
		printf("玩家获胜！\n");
	}
	if (ret == '&')
	{
		printf("电脑获胜！\n");
	}
	if (ret == 'e')
	{
		printf("平局！");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			  break;
			}
	} while(input);
}


int main()
{
	test();
	return 0;
}