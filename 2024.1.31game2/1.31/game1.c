#include "game.h"
void Intboard(char board[ROWS][COLS], int row, int col,char t)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = t;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int y = 0;
	printf(" ");
	for (y = 1; y <= row; y++)
	{
		printf("__%d_", y);
		//printf("____");
	}
	printf("_\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		printf("|");
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j <= col)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row)
		{
			printf(" |");
			for (j = 1; j <= col; j++)
			{
			    printf("---");
				if (j <= col )
					printf("|");
			}
			printf("\n");
		}

	}
	int x = 0;
	printf(" ");
	for (x = 0; x < row; x++)
	{
		printf("|___");
	}
	printf("|\n");
}
void setboard(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void Findboard(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-easy_count)
	{
		printf("请输入排查点的坐标:>\n");
		scanf("%d%d", &x, &y);
		system("cls");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(board, row, col);
				break;
			}
			else//不是雷
			{
				int count = board_count(board, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法！请重新输入\n");
			DisplayBoard(show, ROW, COL);
		}
	}
	if (win == row * col - easy_count)
	{
		printf("恭喜排雷成功！\n");
		DisplayBoard(board, row, col);
	}
}
int board_count(char board[ROWS][COLS], int x, int y)
{
	//字符数字相减得到对应数字
	/*int a = 0;
	int b = 0;
	int count = 0;
	int m = 0;
	for (a = x - 1; a != x + 2; a++)
	{
		for (b = y - 1; b != y + 2; b++)
		{
			m = board[x][y] - '0';
			count = m + count;
		}

	}
	return count;*/
	return board[x - 1][y] +
		board[x + 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x - 1][y + 1] +
		board[x][y + 1] +
		board[x + 1][y + 1] + 8 * '0';
}