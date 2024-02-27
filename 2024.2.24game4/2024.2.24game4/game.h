#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#define R 10
#define C 10
void Int(char* b);
void Show(char b[R][C], int r, int c);
int create(char b[R][C], int r, int c);
void move(char *bb, char b[R][C]);
int cheak(int type, int n, char b[R][C], int i, int j);
char control(char b[R][C], int r, int c, int type, int n, int i, int j);
void b_equal(char* b1, char* b2);
void ad(char b[R][C], int i, int j, char input, int type, int n);
int find_i(char b[R][C], int r, int c);
int find_j(char b[R][C], int r, int c);
void Shape(char b[R][C], int i, int j, int type, int n);
void Play(char b1[R + 1][C], char b2[R + 1][C], int type);