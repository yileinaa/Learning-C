#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Int(char board[R][C], int r,int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Show(char board[R][C], int r, int c,int times)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (j == 0)
				printf("| %c ", board[i][j]);
			else if (j == c-1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c ", board[i][j]);
		}printf("\n");
	}
	printf("%d", times);
}
void Obs(char board[R][C], int r, int c, int times)
{
	switch (times) 
	{
	    case 0:
		{int n;
		for (n = 0; n < c; n++)
		{
			board[0][n] = '-';
		}
		}break;
		default: 
		{
			int x = rand() % C;
			board[0][x] = '*';
		}break;
     }
}
int Obs_move(char board[R+1][C], int r, int c)
{
	int i,j;
	for (i = r-1; i >= 0; i--)
	{
		for (j = 0; j < c; j++)
		{
			board[r][j] = ' ';
			if (board[i][j] == '*'|| board[i][j] == '-')
			{
				int a;
				a = board[i + 1][j];
				if (a != 'p') {
					board[i + 1][j] = board[i][j];
					board[i][j] = a;
				}
				if (a == 'p')
					return 1;
			}
		}
	}
}
int Play_move(char board[R][C], int r, int c)
{
	char inx = 3;
	int iny;
	Sleep(100);
	if (!_kbhit()){//kbhit无输入返回0，！否定
		iny = 3;
	}
	else {
		inx = _getch();
		iny = inx - 48;
	}
	int j;
	for (j = 0; j < c; j++)
	{
		if (board[r - 1][j] == 'p')
			break;
	}
	switch (iny)
	{
	case 1:
		if (j != 0)
		{
			int a;
			a = board[r - 1][j - 1];
			if (a != '*') {
				board[r - 1][j - 1] = board[r - 1][j];
				board[r - 1][j] = a;
			}
			if (a == '*')
				return 1;
		}break;
	case 2:
		if (j != c-1)
		{
			int a;
			a = board[r - 1][j + 1];
			if (a != '*') {
				board[r - 1][j + 1] = board[r - 1][j];
				board[r - 1][j] = a;
			}
			if (a == '*')
				return 1;
		}
		break;
	case 3:
	    {
		 break;
	    }
	}
}