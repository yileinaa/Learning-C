#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//匿名结构体，不完全声明
//struct
//{
//	int data;
//	struct Node next;
//};//错误
struct Node
{
	int data;
	struct Node* next;
};//链表
typedef struct node
{
	int data;
	struct Node* next;
}* list;//typedef struct node* list
int main()
{
	return 0;
}