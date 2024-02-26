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
	int stop_1;
	while (stop_1)
	{
		int type = create(b1, R, C);
		switch (type)
		{
		case 1: {
			int stop_2 = 1;
			while (stop_2)
			{
				int n;
				while (n < 6) {
					if (n == 5)
						n = 1;
					move(b1);
					char input = control(b1, R, C);
					if (input = 'j')
						n++;
					stop_2 = cheak(type, n,b1);
					Show
				}
			}}
			break;
		case 2: {
		}	
		case 3: {
		}
		case 4: {
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