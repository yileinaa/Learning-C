#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int input = 0;
	int sum = 0;
	scanf("%d", &input);
	int i = 0;
	while (input)
	{
		int bit = input % 10;//123 101
		if (bit % 2 == 1)
			bit = 1;
		else
			bit = 0;
		sum += bit *pow(10, i++);
		input /= 10;
	}
	printf("%d\n", sum); 
	return 0;
}