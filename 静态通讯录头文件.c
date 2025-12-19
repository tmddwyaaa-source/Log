#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define MAX_name 20
#define MAX_sex 10
#define MAX_tele 12
#define MAX_addr 30

typedef struct peoinfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
} peoinfo;

typedef struct contact
{
	peoinfo data[100];
	int count;
}contact;

void addcontact(contact* pc);

void initcontact(contact* pc);

void showcontact(contact* pc);

void paixu(contact* pc);

