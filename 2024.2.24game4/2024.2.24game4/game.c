#include "game.h"
void wasd(char b[R][C], int i, int j, char input)
{
	if (input == 'a')
	{
		if (j != 0)
		{
			int a;
			a = b[i][j - 1];
			if (a != 'p') {
				b[i][j - 1] = b[i][j];
				b[i][j] = a;
			}
		}
	}
	if (input == 'd')
	{
		if (j != C - 1)
		{
			int a;
			a = b[i][j + 1];
			if (a != 'p')
			{
				b[i][j + 1] = b[i][j];
				b[i][j] = a;
			}
		}
	}
	if (input == 'w')
	{
		int a;
		a = b[i - 1][j];
		if (a != 'p')
		{
			b[i - 1][j] = b[i][j];
			b[i][j] = a;
		}
	}
	if (input == 's')
	{
		int a;
		a = b[i + 1][j];
		if (a != 'p' && i != R - 1)
		{
			b[i + 1][j] = b[i][j];
			b[i][j] = a;
		}
	}
	if (input == 'q')
	{
		;
	}
}
void Int(char b[R][C], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			b[i][j] = ' ';
		}
	}
}
void Show(char b[R][C], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (j == 0)
				printf("| %c ", b[i][j]);
			else if (j == c - 1)
				printf(" %c |", b[i][j]);
			else
				printf(" %c ", b[i][j]);
		}printf("\n");
	}
}
void create(char b[R][C],int r,int c)
{
	int x = rand() % 4 + 1;
	switch (x)
	{
	case 1:
	{
	int y = rand() % (C - 2);
	b[1][y] = b[0][y] = b[1][y + 1] = b[2][y] = '*';//Æ·
	b[1][y] = 'p';
	break; 
	}
	case 2: 
	{
		int y = rand() % (C - 4);
		b[1][y] = b[1][y + 1] = b[1][y + 2] = b[1][y + 3] = '*';// |
		b[1][y] = 'p';
		break; 
	}
	case 3:
	{
		int y = rand() % (C - 2);
		b[1][y] = b[1][y + 1] = b[0][y] = b[0][y + 1] = '*';// Ìï
		b[1][y] = 'p';
		break;
	}
	case 4:
	{
		int y = rand() % (C - 4);
		b[1][y] = b[1][y + 1] = b[1][y + 2] = b[2][y] = '*';// L
		b[1][y] = 'p';
		break;
	}
	}
}
void move(char b[R][C], int r, int c)
{
	char input;
	Sleep(200);
	if (!_kbhit()){
		input = 'q';
	}
	else {
		input = _getch();
	}
	int i,j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (b[i][j] == 'p')
				break;
		}
		if (b[i][j] == 'p')
			break;
	}
	wasd(b, i, j, input);
}
