#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test(int** arr) {//也可用int *arr[20]接收
    printf("%p\n", arr);
}
int main()
{
    int* arr[20] = { 0 };
    test(arr);
    return 0;
}