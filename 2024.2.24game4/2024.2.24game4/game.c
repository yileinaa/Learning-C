#include "game.h"
void ad(char b[R][C], int i, int j, char input)
{
	if (input == 'a')
	{
		if (j != 0)
		{
			int a;
			a = b[i][j - 1];
			if (a != '*') {
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
			if (a != '*')
			{
				b[i][j + 1] = b[i][j];
				b[i][j] = a;
			}
		}
	}
	if (input == 'q')
	{
		;
	}
}
void Int(char b[R+1][C], int r, int c)
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
int create(char b[R][C],int r,int c)
{
	int x = rand() % 4 + 1;
	switch (x)
	{
	case 1:
	{
		int y = rand() % (C - 2);
		b[1][y] = '*';//Æ·
		break;
	}
	case 2:
	{
		int y = rand() % (C - 4);
		b[1][y] = '*';// |
		break;
	}
	case 3:
	{
		int y = rand() % (C - 2);
		b[1][y] = '*';// Ìï
		break;
	}
	case 4:
	{
		int y = rand() % (C - 4);
		b[1][y] = '*';// L
		break;
	}
	}return x;
}
void control(char b[R][C], int r, int c)
{
	char input;
	Sleep(200);
	if (!_kbhit()){
		input = 'q';
	}
	else {
		input = _getch();
	}
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (b[i][j] == '*')
				break;
		}
		if (b[i][j] == '*')
			break;
	}
	ad(b, i, j, input);
}
void b_equal(char*b1,char*b2)
{
	while (*b2 = *b1)
	{
		;
	}
}
void move(char* b1,int i, int j)
{
	b1[i * C + j + C] = b1[i * C + j];
	b1[i * C + j] = ' ';
}
int stop(char* b1, int st) 
{
	st
}
