#include "game.h"
void menu()
{
	pritnf("*********************\n");
	pritnf("---1.start--0.over---\n");
	pritnf("*********************\n");
}
void game()
{
	srand((unsigned int)time(NULL));
	char b1[R+1][C] = { 0 };//in
	char b2[R+1][C] = { 0 }; //out
	Int(b1, R, C);
	b1[R + 1][0] = '\0';
	while (stop)
	{
		create(b1, R, C);
		move
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
			printf("����������ѡ��\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}