#define _CRT_SECURE_NO_WARNINGS
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

static int search_name(contact* pc,char name[])
{
	assert(pc);
	for (int i = 0; i < pc->count; i++)
	{
		if (0==strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void searcontact(contact* pc)
{
	assert(pc);
	char n[MAX_name] = { 0 };
	printf("请输入要查找的姓名:>");
	scanf("%s", &n);
	int t = search_name(pc,n);
	if (t == -1)
	{
		printf("找不到\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[t].name,
			pc->data[t].age,
			pc->data[t].sex,
			pc->data[t].tele,
			pc->data[t].addr);
	printf("查找成功\n");

}

void delcontact(contact* pc)
{
	assert(pc);
	char n[MAX_name] = { 0 };
	printf("请输入要删除的联系人姓名\n");
	scanf("%s", &n);
	int t = search_name(pc, n);
	if (t == -1)
	{
		printf("用户名不存在\n");
		return;
	}
	for (int i = t; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;

	printf("删除成功\n");

}

void modicontact(contact* pc)
{
	assert(pc);
	char n[MAX_name] = { 0 };
	printf("请输入要修改人的姓名\n");
	scanf("%s", &n);
	int t = search_name(pc, n);
	if (t == -1)
	{
		printf("用户名不存在\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->data[t].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[t].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[t].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[t].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[t].addr);
	printf("修改成功\n");


}

