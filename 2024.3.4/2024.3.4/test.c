#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Ԥ����
//__TIME__%s
//__DATE__%s
//__STDC__��������ѭANSI C��Ϊ1������δ����
int main()
{
	FILE* pf = fopen("log.txt", "w");
	if (pf == NULL) 
	{
		perror("fopen");
		return 1;
		//EXIT_SUCCESS;
	}
	int i = 0; for (i = 0; i < 10; i++)
	{
		fprintf(pf,"file:%s line:%d i=%d\n", __FILE__, __LINE__, i);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
//��gccΪ׼