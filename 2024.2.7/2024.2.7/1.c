#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* des,const char* src)
{
	char* s = src;
	assert(src != NULL);
	assert(des != NULL);//����
	while ( *des++= *src++)
	{
		;
	}
	return s;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxxxs";
	char arr2[] = "hello kitty";
	char* p = NULL;
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}//ָ��ɸ���const����
//const*����ָ����˼Ϊָ��ָ�������ͨ��ָ��ı䵫ָ���������޸�
//*const������˼��ָ��ָ�������ͨ��ָ����ģ�ָ��Ҳ�����޸�