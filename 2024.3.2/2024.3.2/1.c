#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//ÈáÐÔÊý×é
typedef struct S
{
	int n;
	int arr[];
}S;
int main()
{ 
	            /*int sz = sizeof(S);
	            printf("%d\n", sz);*/
	S s;
	S* ps = (S*)malloc(sizeof(S) + 40);
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", ps->arr[i]);
	}
	S* ptr = (S*)realloc(ps, sizeof(S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}
	free(ps);
	ps = NULL;
	return 0;
}