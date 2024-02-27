#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("---1.start--0.over---\n");
	printf("*********************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	char b1[R + 1][C] = { 0 };//in
	char b2[R + 1][C] = { 0 }; //out
	Int(&b1[0][0]);
	int stop_1 = 1;
	while (stop_1)
	{
		int type = create(b1, R, C);
		Play(b1, b2, type);
	}
}
void test()
{
	int input;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("´íÎó£¬ÇëÖØĞÂÑ¡Ôñ£¡\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}