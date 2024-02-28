#include "game.h"
void amove(char b[R][C],int i,int j)
{
	int a;
	a = b[i][j - 1];
	if (a != '*') {
		b[i][j - 1] = b[i][j];
		b[i][j] = a;
	}
}
void dmove(char b[R][C],int i,int j) 
{
	int a;
	a = b[i][j + 1];
	if (a != '*')
	{
		b[i][j + 1] = b[i][j];
		b[i][j] = a;
	}
}
void ad(char b[R][C], int i, int j, char input, int type, int n)
{
	if (input == 'a')
	{
		if ((type == 1 && n == 2) || (type == 2 && n == 1) || (type == 2 && n == 2) || (type == 3 && n == 1) || (type == 4 && n == 1) || (type == 4 && n == 4))
		    if (j > 0 )
			    amove(b, i, j);
		if ((type == 1 && n == 2) || (type == 1 && n == 3) || (type == 1 && n == 4) || (type == 4 && n == 2))
			if (j > 1)
				amove(b, i, j);
		if((type == 4 && n == 3))
			if (j > 2)
				amove(b, i, j);
	}
	if (input == 'd')
	{
		if ((type == 1 && n == 4) || (type == 2 && n == 2) || (type == 4 && n == 2) || (type == 4 && n == 3))
			if (j < C-1)
				dmove(b, i, j);
		if ((type == 1 && n == 1) || (type == 1 && n == 2) || (type == 1 && n == 3) || (type == 3 && n == 1) || (type == 4 && n == 4))
			if (j < C-2)
				dmove(b, i, j);
		if ((type == 4 && n == 1))
			if (j < C-3)
				dmove(b, i, j);
		if ((type == 2 && n == 1))
			if (j < C-4)
				dmove(b, i, j);
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
			if (b[i][j] == '&')
				break;
		}
		if (b[i][j] == '&')
			break;
	}return i;
}
int find_j(char b[R][C], int r, int c)
{
	int i;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (b[i][j] == '&')
				break;
		}
		if (b[i][j] == '&')
			break;
	}return j;
}
void Int(char* b)
{
	int i = (R+1)*C-1;
	while (i)
	{
		*b++ = ' ';
		i--;
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
		int y = rand() % (C - 2)+1;
		if (b[1][y] == '*' || b[1][y - 1] == '*' || b[1][y + 1] == '*')
			x = 10;
		b[1][y] = '&';//品
		break;
	}
	case 2:
	{
		int y = rand() % (C - 4);
		if (b[1][y] == '*' || b[1][y + 1] == '*' || b[1][y + 2] == '*'|| b[1][y + 3] == '*')
			x = 10;
		b[1][y] = '&';// ——
		break;
	}
	case 3:
	{
		int y = rand() % (C - 2);
		if (b[1][y] == '*' || b[1][y + 1] == '*')
			x = 10;
		b[1][y] = '&';// 田
		break;
	}
	case 4:
	{
		int y = rand() % (C - 3);
		if (b[1][y] == '*' || b[1][y + 1] == '*' || b[1][y + 2] == '*')
			x = 10;
		b[1][y] = '&';// L
		break;
	}
	}return x;
}
char control(char b[R][C], int r, int c, int type, int n , int i, int j)
{
	char input;
	Sleep(200);
	if (!_kbhit()){
		input = 'q';
	}
	else {
		input = _getch();
	}
	ad(b, i, j, input,type,n);
	if (input == 'j')
		return input;
}
void b_equal(char*b1,char*b2)
{
	while (*b2 = *b1)
	{
		if (*b1 == '&')
			*b2 = '*';
		b1++;
		b2++;
	}
}
void move(char* bb, char b[R][C],int i,int j)
{
	bb[i * C + j + C] = bb[i * C + j];
	bb[i * C + j] = ' ';
}
int cheak(int type,int n,char b[R][C],int i,int j)
{
	if (type == 1 && n == 1)//品
	{
		if (b[i + 1][j] == '*' || b[i + 1][j + 1] == '*' || b[i + 1][j - 1] == '*'||i==R-1)
		{
			b[i][j] = b[i][j + 1] = b[i][j - 1] = b[i - 1][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 2)//品->
	{
		if (b[i + 1][j] == '*' || b[i + 1][j + 1] == '*'||i == R - 2)
		{
			b[i][j] = b[i + 1][j] = b[i - 1][j] = b[i][j + 1] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 3)//品<-
	{
		if (b[i + 1][j] == '*' || b[i + 1][j - 1] == '*' || i == R - 2)
		{
			b[i][j] = b[i + 1][j] = b[i - 1][j] = b[i][j-1] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 1 && n == 4)//品|
	{
		if (b[i + 2][j] == '*' || b[i + 1][j - 1] == '*'|| b[i + 1][j + 1] == '*'|| i == R - 2)
		{
			b[i][j] = b[i][j + 1] = b[i][j - 1] = b[i + 1][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 2 && n == 1)
	{
		if(b[i+1][j]=='*' || b[i+1][j+1] == '*'||b[i+1][j+2] == '*'||b[i+1][j+3] == '*'|| i == R - 1)
		{
			b[i][j] = b[i][j + 1] = b[i][j + 2] = b[i][j + 3] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 2 && n == 2)
	{
		if (b[i + 1][j] == '*'|| i == R - 1)
		{
			b[i][j] = b[i-1][j] = b[i-2][j] = b[i-3][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 3 && n == 1)//田
	{
		if(b[i+1][j]=='*'|| b[i+1][j+1]=='*'|| i == R - 1)
		{
			b[i][j] = b[i][j + 1] = b[i - 1][j] = b[i - 1][j + 1] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 1)//L长底
	{
		if(b[i + 1][j] == '*' || b[i + 1][j + 1] == '*' || b[i + 1][j + 2] == '*'|| i == R - 1)
		{
			b[i][j] = b[i][j + 1] = b[i][j + 2] = b[i - 1][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 2)//L长边右
	{
		if (b[i + 1][j] == '*' || b[i + 1][j -1] == '*'|| i == R - 1)
		{
			b[i][j] = b[i][j - 1] = b[i - 1][j] = b[i - 2][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 3)//L长顶
	{
		if (b[i + 2][j] == '*' || b[i + 1][j - 1] == '*' || b[i + 1][j - 2] == '*' || i == R - 2)
		{
			b[i][j] = b[i][j - 1] = b[i][j - 2] = b[i + 1][j] = '*';
			return 0;
		}
		else
			return 1;
	}
	if (type == 4 && n == 4)//L长边左
	{
		if (b[i + 3][j] == '*' || b[i + 1][j + 1] == '*'||i==R-3)
		{
			b[i][j] = b[i][j + 1] = b[i - 1][j] = b[i - 2][j] = '*';
			return 0;
		}
		else
			return 1;
	}
}
void Play(char b1[R+1][C],char b2[R+1][C],int type )
{
	int stop_2 = 1;
	while (stop_2)
	{
		int n = 1;
		while (n < 6)
		{
			Sleep(200);
			system("cls");
			if (n == 5)
				n = 1;
			int i = find_i(b1, R, C);
			int j = find_j(b1, R, C);
			char input = control(b1, R, C,type ,n,i,j);
			if (input == 'j')
				n++;
			i = find_i(b1, R, C);
			j = find_j(b1, R, C);
			stop_2 = cheak(type, n, b1,i,j);
			b_equal(&b1[0][0], &b2[0][0]);
			Shape(b2, i, j, type, n);
			clear(b1);
			Show(b2, R, C);
			if (stop_2 == 0)
				break;
			move(&b1[0][0], b1, i, j);

		}
	}
}
void Shape(char b[R][C],int i, int j,int type ,int n)
{
	if (type == 1 && n == 1)//品
		b[i][j] = b[i][j + 1] = b[i][j - 1] = b[i - 1][j] = '*';
	if (type == 1 && n == 2)//品->
		b[i][j] = b[i + 1][j] = b[i - 1][j] = b[i][j + 1] = '*';
	if (type == 1 && n == 3)//品<-
		b[i][j] = b[i + 1][j] = b[i - 1][j] = b[i][j - 1] = '*';
	if (type == 1 && n == 4)//品|
		b[i][j] = b[i][j + 1] = b[i][j - 1] = b[i + 1][j] = '*';
	if (type == 2 && n == 1)//--
		b[i][j] = b[i][j + 1] = b[i][j + 2] = b[i][j + 3] = '*';
	if (type == 2 && n == 2)//|
		b[i][j] = b[i - 1][j] = b[i - 2][j] = b[i - 3][j] = '*';
	if (type == 3 && n == 1)//田
		b[i][j] = b[i][j + 1] = b[i - 1][j] = b[i - 1][j + 1] = '*';
	if (type == 4 && n == 1)//L长底
		b[i][j] = b[i][j + 1] = b[i][j + 2] = b[i - 1][j] = '*';
	if (type == 4 && n == 2)//L长边右
		b[i][j] = b[i][j - 1] = b[i - 1][j] = b[i - 2][j] = '*';
	if (type == 4 && n == 3)//L长顶
		b[i][j] = b[i][j - 1] = b[i][j - 2] = b[i + 1][j] = '*';
	if (type == 4 && n == 4)//L长边左
		b[i][j] = b[i][j + 1] = b[i - 1][j] = b[i - 2][j] = '*';
}

void clear(char b[R][C])
{
	int i = R - 1;
	for (i = R - 1; i >= 0; i--)
	{
		int j = C - 1;
		for (j = C - 1;j>=0; j--)
		{
			if (b[i][j] == '*'&&j!=0)
				continue;
			if (b[i][j] == ' ')
				break;
			if (j == 0)
			{
				for (j = C - 1; j >= 0; j--)
				{
					int n = i;
					for (n = i; n > 0; n--)
					{
						b[n][j] = b[n - 1][j];
					}
				}
				i++;
			}
		}
	}
}