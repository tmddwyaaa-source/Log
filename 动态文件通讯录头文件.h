#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_name 20
#define MAX_sex 10
#define MAX_tele 12
#define MAX_addr 30
#define MAX_DATA 3
#define KUOR 2

typedef struct peoinfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
} peoinfo;

//静态版
//typedef struct contact
//{
//	peoinfo data[MAX];
//	int count;  //当前人数
//}contact;

//动态版
typedef struct contact
{
	peoinfo* data;
	int count;
	int zuidazhi;
}contact;

void addcontact(contact* pc);

//静态版
//void initcontact(contact* pc);

//动态版
int initcontact(contact* pc);

//动态必须的删除空间
void delkongj(contact* pc);

void showcontact(contact* pc);

void paixu(contact* pc);

void searcontact(contact* pc);

void delcontact(contact* pc);

void modicontact(contact* pc);

//存档
void savecontact(contact* pc);

//读档
void Ladecontact(contact* pc);