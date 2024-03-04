#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define print printf("hehe\n");
//#define DEBUG printf("sfsdf",__DATE__,\
__TIME__)\//续行符
//#define 定义宏macro
//#define SQURE(X) (X*X)
//int main()
//{
//    int r = SQURE(5+1);//直接替换
//    printf("%d\n", r);
//    return 0;
//}

#define PRINT(N,FOM) printf("the value of" #N " is" FOM "\n",N)
int main()//##将两个符号连起,宏不需要特定类型，没法调试
{
    float a = 1.91;
#undef PRINT//移除
    PRINT(a,"%d");
    return 0;
}//习惯宏全大写
#ifdef SSS 0//条件编译==#if define(SSS)否定改!define==ifndef
#elif 0
#endif
//<>直接去库目录查找，""先代码所在路径，再库目录