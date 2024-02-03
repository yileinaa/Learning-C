#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Intboard(char board[ROW][COL], int row, int col)    
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	system("cls");
	int i = 0;
	for (i = 0; i < row ; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}
void DisplayBoard1(char board[ROW][COL], int row, int col)
{
	system("cls");
	int i = 0;
	int y = 0;
	for (y = 0; y < row; y++)
	{
		printf("____");
	}
	printf("_\n");
	for (i = 0; i < row; i++)
	{
		printf("|");
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("|");
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col)
					printf("|");
			}
			printf("\n");
		}

	}
	int x = 0;
	for (x = 0; x < row; x++)
	{
		printf("|___");
	}
	printf("|\n");
}
void PlayMove(char board [ROW][COL],int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>");
	while (1) 
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该坐标被占用\n");
		}
		else
		{
			printf("坐标非法\n");
		}
	}
}
void PCMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '&';
			break;
		}
	}
}
char Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (i = 0; i < row; i++)
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')//不能连等
			{
				return board[i][1];
			}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (is_unFull(board, ROW, COL) == 1)
	{
		return 'c';
	}
	else
		return 'e';
}
int is_unFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
				break;
			}
		}
	}
}