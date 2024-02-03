#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define ROWS ROW+2
#define COL 9
#define COLS COL+2
#define easy_count 10
void DisplayBoard(char board[ROW][COL], int row, int col);
void Intboard(char board[ROW][COL], int row, int col,char t);
void setboard(char board[ROW][COL], int row, int col);
void Findboard(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int board_count(char board[ROWS][COLS], int x, int y);
