#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <windows.h>//与<stdlib.h>冲突，需要时只保留后者即可


int main()
{
	int x;
	Sleep(1000);
	if (!_kbhit())
	{
		printf("none");
	}
	else
	{
		x = _getch();
		int y = x - 48;
		printf("%d", y);
	}
	return 0;
}