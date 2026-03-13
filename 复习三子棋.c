#include "game.h"

void qipan()
{
	char qipan[K][C];
	qipanchus(qipan, C, K);
	dyqipan(qipan);
}

void qipanchus(char arr[][C], int c, int k)
{
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < k; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void dyqipan(char arr[][C])
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

void player(char arr[][C])
{

}

void play()
{
	qipan();
	player();
}