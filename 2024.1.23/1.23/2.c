#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int MAX(int x, int y)
{
    if (x < y)
        return y;
    else
        return x;
}

int main()
{
    /*int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    int x = MAX(a, b);
    printf("max=%d", x);*/
    
    //int a = 0;
    //int b = ~a;//按位取反码
    //printf("%d\n", b);
    //return 0;
    // 
    //int a = (int)3.14;//强制类型转化
    //int b = 0;
    //scanf("%d", &b);
    //int max = (a > b ? a : b);
    //printf("%d", max);
    char arr[] = "wxy";
    char x = arr[1];
    printf("%c", x);
    return 0;

}
