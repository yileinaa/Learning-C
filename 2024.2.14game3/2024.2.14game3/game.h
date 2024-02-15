#include <stdio.h>
#define R 10
#define C 6
#include <stdlib.h>
#include <time.h>
//#include <windows.h>
#include <conio.h>
void Int(char board[R][C],int r,int c);
void Show(char board[R][C], int r);
void Obs(char board[R][C], int r, int c,int times);
int Obs_move(char board[R][C], int r, int c);
int Play_move(char board[R][C], int r, int c);
void shot(char board[R][C], int r, int c);