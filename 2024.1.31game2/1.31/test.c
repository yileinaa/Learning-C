#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("--------1.play  0.exit--------\n");
	printf("******************************\n");
}

void game()
{
	char board[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Intboard(board, ROWS, COLS,'0');//��ʼ��
	Intboard(show, ROWS, COLS,'*');
	setboard(board, ROW, COL);
	//DisplayBoard(board, ROW, COL);
	DisplayBoard(show, ROW, COL);
	Findboard(board,show,ROW, COL);
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
		} while (input);
}



int main()
{
	test();
	return 0;
}