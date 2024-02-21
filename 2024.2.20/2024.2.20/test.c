#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void qsort(void* base,//起始位置
	size_t num,//个数
	size_t width,//大小（字节）
	int(*cmp)(const void* e1, const void* e2));//函数指针比较函数

struct Stu
{
	char name[20];
	int age;
};


void Swap(char* buf1, char* buf2, int width)
{
	int i;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//重建冒泡函数
void bubble_sort(void*base,int num,int width,int(*cmp)(const void* e1, const void* e2))
{
	int i, j;
	for (i = 0; i < num - 1; i++)
	{
		int flag = 1;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base+(j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base+(j + 1)* width, width);
			}
		}
		if (flag == 1) 
		{
			break;
		}
	}
}


int cmp_int(const void* e1, const void* e2)//void指针不能直接解引用,+-1
{
	return (*(int*)e1 - *(int*)e2);
}


int cmp_(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);

}

int test()
{
	struct Stu s[] = { {"\0",15},{"list",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_);
	bubble_sort(s, sz, sizeof(s[0]), cmp_);
	printf("%d", sizeof(s));
}

int main() {
	test(); 
	return 0;
}