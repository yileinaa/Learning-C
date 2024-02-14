#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print2(int (*p)[5],int r,int c)
{
	int i;
	for (i = 0; i < r; i++)
	{
		int j;
		for (j = 0; j < c; j++)
		{
			//printf("%d", *(*(p + i)  + j));
			printf("%d",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,2,3,4,6,3,5 };
	print2(arr, 3, 5);
		return 0;
}//数组指针解引用相当于首元素的地址
//二维数组的首元素是他的第一行