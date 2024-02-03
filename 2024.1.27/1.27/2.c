#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int len(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++; 
//		s++;//数组元素地址连续
//	}
//	return count;
//}

//递归法
int count = 0;
int len(char* s)
{
	if ((*s) != '\0')

	{
		count++;
		len(s+1);
	}
	else
		count += 0;
	 return count;

		/*return 1 + len(s + 1);
	else
		return 0;*/

}

int main()
{
	char arr[] = "niubbbbbb";
	int en = len(arr);//数组传参传的是第一个字符地址,不是整个数组
	printf("len=%d\n", en);
	return 0;
}