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
	b1[R][0] = '\0';
	b2[R][0] = '\0';
	int stop_1 = 1;
	while (stop_1)
	{
		int type = create(b1, R, C);
		switch (type)
		{
		case 1:
		{
			int stop_2 = 1;
			while (stop_2)
			{
				int n = 1;
				while (n < 6)
				{
					Sleep(500);
					system("cls");
					if (n == 5)
						n = 1;
					move(&b1[0][0], b1);
					char input = control(b1, R, C);
					if (input = 'j')
						n++;
					stop_2 = cheak(type, n, b1);
					b_equal(&b1[0][0], &b2[0][0]);
					Show(b1, R, C);
				}
			}
		}break;
		case 2:
		{
			int stop_2 = 1;
			while (stop_2)
			{
				int n = 1;
				while (n < 6)
				{
					Sleep(500);
					system("cls");
					if (n == 5)
						n = 1;
					move(&b1[0][0], b1);
					char input = control(b1, R, C);
					if (input = 'j')
						n++;
					stop_2 = cheak(type, n, b1);
					b_equal(&b1[0][0], &b2[0][0]);
					Show(b1, R, C);
				}
			}
		}break;
		case 3:
		{
			int stop_2 = 1;
			while (stop_2)
			{
				int n = 1;
				while (n < 6)
				{
					Sleep(500);
					system("cls");
					if (n == 5)
						n = 1;
					move(&b1[0][0], b1);
					char input = control(b1, R, C);
					if (input = 'j')
						n++;
					stop_2 = cheak(type, n, b1);
					b_equal(&b1[0][0], &b2[0][0]);
					Show(b1, R, C);
				}
			}
		}break;
		case 4:
		{
			int stop_2 = 1;
			while (stop_2)
			{
				int n = 1;
				while (n < 6)
				{
					Sleep(500);
					system("cls");
					if (n == 5)
						n = 1;
					move(&b1[0][0], b1);
					char input = control(b1, R, C);
					if (input = 'j')
						n++;
					stop_2 = cheak(type, n, b1);
					b_equal(&b1[0][0], &b2[0][0]);
					Show(b1, R, C);
				}
			}
		}break;
		}
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
			printf("´íÎó£¬ÇëÖØÐÂÑ¡Ôñ£¡\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}