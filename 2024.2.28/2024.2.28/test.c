#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ṹ�壬����ȫ����
//struct
//{
//	int data;
//	struct Node next;
//};//����
struct Node
{
	int data;
	struct Node* next;
};//����
typedef struct node
{
	int data;
	struct Node* next;
}* list;//typedef struct node* list
int main()
{
	return 0;
}