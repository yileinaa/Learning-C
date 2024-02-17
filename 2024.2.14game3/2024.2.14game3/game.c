#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void wasd(char board[R][C], int i, int j, char input)
{
	if (input == 'a')
	{
		if (j != 0)
		{
			int a;
			a = board[i][j - 1];
			if (a != '*') {
				board[i][j - 1] = board[i][j];
				board[i][j] = a;
			}
			if (a == '*')
				return 1;
		}
	}
	if (input == 'd')
	{
		if (j != C - 1)
		{
			int a;
			a = board[i][j + 1];
			if (a != '*')
			{
				board[i][j + 1] = board[i][j];
				board[i][j] = a;
			}
			if (a == '*')
				return 1;
		}
	}
	if (input == 'w')
	{
		int a;
		a = board[i - 1][j];
		if (a != '*')
		{
			board[i - 1][j] = board[i][j];
			board[i][j] = a;
		}
		if (a == '*')
			return 1;
	}
	if (input == 's')
	{
		int a;
		a = board[i + 1][j];
		if (a != '*' && i != R - 1)
		{
			board[i + 1][j] = board[i][j];
			board[i][j] = a;
		}
		if (a == '*')
			return 1;
	}
	if (input == 'q')
	{
		;
	}
}
void shot(char board[R][C], int i, int j, char shot)
{
	if (shot == 'j')//ÊúÅÚ
	{
		int n;
		for (n = i - 1; n >= 0; n--)
		{
			system("cls");
			board[n][j] = '|';
			Show(board, R, C);
		}
		for (n = 0; n < i; n++)
		{
			board[n][j] = ' ';
		}
	}
	if (shot == 'k')//¾ØÐÎÅÚ
	{
		int n, m;
		int z = 2;//·¶Î§
		for (n = i; n >= i - z; n--)
		{
			for (m = j - z; m <= j + z; m++)
			{
				if (board[n][m] != board[i][j])
				{
					board[n][m] = '&';
				}
			}
		}
		system("cls");
		Show(board, R, C);
		Sleep(100);
		for (n = i; n >= i - z; n--)
		{
			for (m = j - z; m <= j + z; m++)
			{
				if (board[n][m] != board[i][j])
				{
					board[n][m] = ' ';
				}
			}
		}
	}
	if (shot == 'l')//´óÕÐÇåÆÁ
	{
		Int(board, R, C);
		board[i][j] = 'p';
	}
}
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
void Show(char board[R][C], int r, int c)
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
	char input;
	Sleep(200);
	if (!_kbhit()){//kbhitÎÞÊäÈë·µ»Ø0£¬£¡·ñ¶¨
		input = 'q';
	}
	else {
		input = _getch();
	}
	int i,j;
	for (i = 0; i < r ; i++)
	{
		for (j = 0; j < c-1; j++)
		{
			if (board[i][j] == 'p')
				break;
		}
		if (board[i][j] == 'p')
			break;
	}
	shot(board, i, j, input);
	wasd(board, i, j, input);
}