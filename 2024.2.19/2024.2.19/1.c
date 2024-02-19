#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//回调函数
void burble(int arr[],int sz)
{
	int i,j;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				flag = 0;
			}
		 }
		if (flag == 1)
		{
			break;
		}
	}
}//冒泡
void qsort(void* base,//起始位置
	size_t num,//个数
	size_t width,//大小（字节）
	int(*cmp)(const void* e1, const void* e2));//函数指针比较函数



int cmp_int(const void* e1, const void* e2)//void指针不能直接解引用,+-1
{
	/*if (*(int *)e1 > *(int*)e2)
		return 1;
	else if (*(int *)e1 == *(int*)e2)
		return 0;
	else
		return -1;*/
	return (*(int*)e1 - *(int*)e2);
	
}
int main() 
{
	int arr[] = { 2,3,5,1,7,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//burble(arr,sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int n;
	for (n = 0; n < sz; n++)
	{
		printf("%d", arr[n]);
	}
	return 0;
 }