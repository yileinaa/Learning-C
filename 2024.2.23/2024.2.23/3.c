#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
//字符分类函数
void* my_memcpy(void* des, void* src, size_t num)
{
	assert(des&&src);
	void* ret = des;
	while (num--)
	{
		*(char*)des = *(char*)src;
		des = (char*)des + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	/*isspace();
	iscntrl();
	isalnum();
	isdigit();
	isxdigit();
	isalpha();
	isupper();
	islower();
	isprint();
	isgraph();
	ispunct();*/
	printf("%c\n", tolower('W'));
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[] = { 0 };
	memcpy(arr2, arr1, 28);//负责拷贝两块独立空间中的数据
	return 0;
}