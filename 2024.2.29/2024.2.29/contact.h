#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#define MAX_NAME 20
#define DEFAULT 3
#define INCREASE 3
typedef struct PeoInfo 
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
    char addr[30];
}PeoInfo;
//静态
//typedef struct Contact//通讯录
//{
//    PeoInfo data[100];//人的信息
//    int count;//实际人的个数
//}Contact;
typedef struct Contact
{
    PeoInfo* data;
    int count;
    int capacity;//当前容量
}Contact;

void Init(Contact* pc);
void Show(const Contact* pc);

