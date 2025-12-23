#include "contact.h"

void initcontact(contact* pc)
{
	assert(pc);
	memset(pc->data, 0, sizeof(pc->data));
	pc->count = 0; 
}

void addcontact(contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("空间不足,满了\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("添加成功\n");
}

void showcontact(contact* pc)
{
	assert(pc);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name,
									pc->data[i].age,
									pc->data[i].sex,
									pc->data[i].tele,
									pc->data[i].addr);
	}
}

int cmp_pc_data_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}
void paixu(contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(peoinfo), cmp_pc_data_name);
	printf("比较成功\n");
}
