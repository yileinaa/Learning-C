#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int len(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++; 
//		s++;//����Ԫ�ص�ַ����
//	}
//	return count;
//}

//�ݹ鷨
int count = 0;
int len(char* s)
{
	if ((*s) != '\0')

	{
		count++;
		len(s+1);
	}
	else
		count += 0;
	 return count;

		/*return 1 + len(s + 1);
	else
		return 0;*/

}

int main()
{
	char arr[] = "niubbbbbb";
	int en = len(arr);//���鴫�δ����ǵ�һ���ַ���ַ,������������
	printf("len=%d\n", en);
	return 0;
}