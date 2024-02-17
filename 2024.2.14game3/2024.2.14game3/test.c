#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************************************\n");
	printf("--------1.开始游戏-----0.退出游戏-------\n");
	printf("****************************************\n");
	printf("-----------------WASD移动---------------\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	int times = 100;
	char board[R+1][C] = { 0 };
	Int(board, R, C);
	Obs(board, R, C, times);
	board[R-1][0] = 'p';
	Show(board, R, C);
	while (times) {
		system("cls");
		int o = Obs_move(board, R, C);
		Obs(board, R, C,times - C);
		if (o == 1) {
			printf("failure!\n");
			break;
		}
		Show(board, R, C);
		int p = Play_move(board, R, C);
		if (p == 1){
			printf("failure!\n");
			break;
		}
		times--;
	}
	if (times == 0)
		printf("胜利!!\n");
}
void exam()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");	   
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
    exam();
	return 0;
}