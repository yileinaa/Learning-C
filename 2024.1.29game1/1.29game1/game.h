#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Intboard(char board[ROW][COL], int row, int col);
void DisplayBoard1(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void PCMove(char board[ROW][COL], int row, int col); 
char Win(char board[ROW][COL], int row, int col);
int is_unFull(char board[ROW][COL], int row, int col);