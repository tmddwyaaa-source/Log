#include "game.h"                                     ///game.c

void qipanchus(char arr[K][C], int c, int k)
{
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < k; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void dyqipan(char arr[K][C])
{
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < K; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < K - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < C - 1)
		{
			for (int j = 0; j < K; j++)
			{
				printf("---");
				if (j < K - 1)
				{
					printf("|");
				}

			}
			printf("\n");
		}
	}
}

void player(char arr[K][C])
{
	int c = 0, k = 0;
	printf("玩家下棋(x x)=>");
	while (1)
	{
		scanf_s("%d %d", &k, &c);
		if (arr[k - 1][c - 1] == ' ')
		{
			arr[k - 1][c - 1] = '*';
			break;
		}
		else if (arr[k - 1][c - 1] != ' ')
		{
			printf("此位已满,请重试\n");
		}
		else
		{
			printf("输入错误请重试\n");
		}
	}
}

void computer(char arr[K][C])
{
	printf("电脑下棋\n");
	int rk = 0,rc = 0;
	while (1)
	{
		rk = rand() % K;
		rc = rand() % C;
		if (arr[rk][rc] == ' ')
		{
			arr[rk][rc] = '#';
			break;
		}
	}
}

int pjpd(char arr[K][C])
{
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char yiya(char arr[K][C])
{
	for (int i = 0; i < K; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][1];
		}
	}
	for (int j = 0; j < C; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[1][j] != ' ')
		{
			return arr[1][j];
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (pjpd(arr))
	{
		return 'p';
	}
	return 'x';
}

void fg(char A)
{
	if (A == '*')
	{
		printf("玩家赢\n");
	}
	else if (A == '#')
	{
		printf("电脑赢\n");
	}
	else if (A == 'p')
	{
		printf("平局\n");
	}
	else
	{
		printf("返回值有问题\n");
	}
}

void play()
{
	char A = ' ';
	srand((unsigned int)time(NULL));
	char arr[K][C] = { 0 };
	qipanchus(arr, C, K);
	while (1)
	{
		dyqipan(arr);
		player(arr);
		A = yiya(arr);
		if (A != 'x')
		{
			fg(A);
			break;
		}
		computer(arr);
		A = yiya(arr);
		if (A != 'x')
		{
			fg(A);
			break;
		}
	}
}


////////////////////////////game.h
#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define C 3
#define K 3
//char arr[K][C];
void play();

void qipanchus(char arr[K][C],int c,int k);

void dyqipan(char arr[K][C]);

void player(char arr[K][C]);

void computer(char arr[K][C]);

char yiya(char arr[K][C]);

int pjpd(char arr[K][C]);

void fg(char A);


//////////////////////////////test.c
#include "game.h"

void jiem()
{
	printf("\n--------------------------\n");
	printf("--------0. exit ----------\n");
	printf("--------1. play ----------\n");
	printf("--------------------------\n");
}
int main()
{
	int n = 0;
	do
	{
		jiem();
		printf("请输入数字=>");
		scanf_s("%d", &n);
		switch(n)
		{
			case 0:
				printf("退出成功\n");
				break;
			case 1:
				play();
				break;
			default:
				printf("输入错误，请重试\n");
		}
	} while (n);
	return 0;
}