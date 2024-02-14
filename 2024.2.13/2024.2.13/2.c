#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int arr[2][3] = { {1,2,3},{3,4,5} };
    int(*p)[3] = arr;
    int i, j;
    //for (i = 0; i < 2; i++)
    //{
        //for (j = 0; j < 3; j++)
        {
            printf("%p\n%p\n%d", &arr, &arr + 1,sizeof(arr));
        }
   // }
    return 0;
}