#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
// 
// 
// 
//int main()
//{
//    if (strlen("abc") - strlen("abcdef") >= 0)
//        //strlen�����޷�����
//        printf(">");
//    else
//        printf("<");
//    return 0;
//}


int main()
{
	int n = 9;
	float* pF = (float*)&n;
	printf("n��ֵ��%d\n", n);
	printf("*pF��ֵ:%f\n", *pF);
	*pF = 9.0;
	printf("num��ֵ��%d\n",n);
	printf("*pF��ֵ��%f\n",*pF);
	return 0;
}