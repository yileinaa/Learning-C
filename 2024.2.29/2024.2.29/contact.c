#include "contact.h"
void Init(Contact* pc) 
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void Add(Contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("已满！\n");
		return;
	}
	printf("名字!");
	scanf("%s", pc->data[pc->count].name);
	printf("年龄!");
	scanf("%s",& (pc->data[pc->count].age));
	printf("性别!");
	scanf("%s", pc->data[pc->count].sex);
	printf("电话!");
	scanf("%s", pc->data[pc->count].tele);
	printf("地址!");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("增加成功\n");
}
void Show(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别","电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name, 
			pc->data[i].age, 
			pc->data[i].sex, 
			pc->data[i].tele, 
			pc->data[i].addr);

	}
}
void Del(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("要删除人的名字！");
	scanf("%s", name);
	if (pc->count == 0)
	{
		printf("空！\n");
		return;
	}
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("不存在!");
		return;
	}
	int i;
	for (i = pos; i < pc->count; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功!");
}
static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (0 == (strcmp(pc->data[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}
void Search(Contact* pc)
{
	assert(pc);
	printf("查找人的名字!");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("不存在!");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		pc->data[pos].age,
		pc->data[pos].sex,
		pc->data[pos].tele,
		pc->data[pos].addr);
}
void Modify(Contact* pc)
{
	assert(pc);
	printf("修改人的名字!");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("不存在!");
		return;
	}
	printf("请修改!\n");
	printf("名字!");
	scanf("%s", pc->data[pos].name);
	printf("年龄!");
	scanf("%d", &(pc->data[pos].age));
	printf("性别!");
	scanf("%s", pc->data[pos].sex);
	printf("电话!");
	scanf("%s", pc->data[pos].tele);
	printf("地址!");
	scanf("%s", pc->data[pos].addr);
}
int cmp(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);;
}
void	Sort(Contact* pc)//名称排序
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp);
	printf("排序成功！");
}
