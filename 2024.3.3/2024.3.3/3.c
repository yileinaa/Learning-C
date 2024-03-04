#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//文件定位指针
fseek(pf, 2, SEEK_SET);//SEEK_SET开始  SEEK_CUR现在  SEEK_END末尾
ftell(pf);//返回偏移量
rewind(pf);//指针回到初始位置