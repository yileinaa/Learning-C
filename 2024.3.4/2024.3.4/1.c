#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define print printf("hehe\n");
//#define DEBUG printf("sfsdf",__DATE__,\
__TIME__)\//���з�
//#define �����macro
//#define SQURE(X) (X*X)
//int main()
//{
//    int r = SQURE(5+1);//ֱ���滻
//    printf("%d\n", r);
//    return 0;
//}

#define PRINT(N,FOM) printf("the value of" #N " is" FOM "\n",N)
int main()//##��������������,�겻��Ҫ�ض����ͣ�û������
{
    float a = 1.91;
#undef PRINT//�Ƴ�
    PRINT(a,"%d");
    return 0;
}//ϰ�ߺ�ȫ��д
#ifdef SSS 0//��������==#if define(SSS)�񶨸�!define==ifndef
#elif 0
#endif
//<>ֱ��ȥ��Ŀ¼���ң�""�ȴ�������·�����ٿ�Ŀ¼