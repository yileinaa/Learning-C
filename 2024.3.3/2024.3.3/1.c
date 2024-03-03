#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	struct S s = { "zhangsan",10,99.5 };
	FILE* pf = fopen("test.txt", "w");//a追加
	if (pf == NULL)
	{
		//printf("%s", strerror(errno));
		perror("fopen"); 
		return 1;
	}
	fprintf(pf, "%s %d %f", s.arr, s.age, s.score);

	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
	printf("%s %d %f", s.arr, s.age, s.score);

	fputc('a', pf);

	fputs("adasdaasd", pf);

    int ch = fgetc(pf);//读取错误返回eof
	printf("%c\n", ch);

	char arr[8];
	fgets(arr,5,pf);
	printf("%s\n", arr);
	fwrite(&s, sizeof(struct S), 1, pf); //从s写到pf
	fread(&s, sizeof(struct S), 1, pf); //从pf读到s
	fclose(pf);
	pf = NULL;
	return 0;
}