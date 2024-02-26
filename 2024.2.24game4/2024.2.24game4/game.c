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
int find_i(char b[R][C], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (b[i][j] == 'p')
				break;
		}
		if (b[i][j] == 'p')
			break;
	}return i;
}
int find_j(char b[R][C], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (b[i][j] == 'p')
				break;
		}
		if (b[i][j] == 'p')
			break;
	}return j;
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
		b[1][y] = '&';//品
		break;
	}
	case 2:
	{
		int y = rand() % (C - 4);
		b[1][y] = '&';// |
		break;
	}
	case 3:
	{
		int y = rand() % (C - 2);
		b[1][y] = '&';// 田
		break;
	}
	case 4:
	{
		int y = rand() % (C - 3);
		b[1][y] = '&';// L
		break;
	}
	}return x;
}
char control(char b[R][C], int r, int c)
{
	char input;
	Sleep(200);
	if (!_kbhit()){
		input = 'q';
	}
	else {
		input = _getch();
	}
	int i = find_i(b, R, C);
	int j = find_j(b, R, C);
	ad(b, i, j, input);
	if (input == 'j')
		return input;
}
void b_equal(char*b1,char*b2)
{
	while (*b2 = *b1)
	{
		;
	}
}
void move(char* bb)
{
	int i = find_i(bb, R, C);
	int j = find_j(bb, R, C);
	bb[i * C + j + C] = bb[i * C + j];
	bb[i * C + j] = ' ';
}
int cheak(int type,int n,char b[R][C])
{
	int i = find_i(b, R, C);
	int j = find_j(b, R, C);
	if (type == 1 && n == 1)//品
	{
		if (b[i + 1][j] == '*' || b[i + 1][j + 1] == '*' || b[i + 1][j - 1] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 2)//品->
	{
		if (b[i + 1][j] == '*' || b[i + 1][j + 1] == '*' )
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 3)//品<-
	{
		if (b[i + 1][j] == '*' || b[i + 1][j - 1] == '*' )
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 4)//品|
	{
		if (b[i + 2][j] == '*' || b[i + 1][j - 1] == '*'|| b[i + 1][j + 1] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 2 && n == 1)
	{
		if(b[i+1][j]=='*' || b[i+1][j+1] == '*'||b[i+1][j+2] == '*'||b[i+1][j+3] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 2 && n == 2)
	{
		if (b[i + 1][j] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 3 && n == 1)//田
	{
		if(b[i+1][j]=='*'|| b[i+1][j+1]=='*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 1)//L长底
	{
		if(b[i + 1][j] == '*' || b[i + 1][j + 1] == '*' || b[i + 1][j + 2] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 2)//L长边右
	{
		if (b[i + 1][j] == '*' || b[i + 1][j -1] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 3)//L长顶
	{
		if (b[i + 2][j] == '*' || b[i + 1][j -1] == '*' || b[i + 1][j - 2] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 4)//L长边左
	{
		if (b[i + 3][j] == '*' || b[i + 1][j + 1] == '*')
		{
			return 0;
		}
		else
			return 1;
	}
}