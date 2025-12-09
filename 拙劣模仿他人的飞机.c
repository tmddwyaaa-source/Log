#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
int main()
{
	int i, j;
	int x = 15;
	int y = 18;
	char move;
	int baz_x = 8;
	int baz_y = 10;
	srand((unsigned int)time(NULL));
	int baz = 1;
	int fas = 0;
	int fens = 0;
	while (1)
	{
		system("cls");
		for (j = 0; j < baz_y; ++j)
		{
			printf("\n");
		}
		for (i = 0; i < baz_x; ++i)
		{
			printf(" ");
		}
		printf("S\n");
		if (baz == 0)
		{
			baz_x = rand() % 11;
			baz_y = rand() % 11;
			for (j = 0; j < baz_y; ++j)
			{
				printf("\n");
			}
			for (i = 0; i < baz_x; ++i)
			{
				printf(" ");
			}
			printf("S\n");
			baz = 1;
			++fens;
		}
		if (fas == 0)
		{
			for (j = 0; j < y; ++j)
			{
				printf("\n");
			}
		}
		else
		{
			for (j = 0; j < y; ++j)
			{
				for (i = 0; i < x; ++i)
				{
					printf(" ");
				}
				printf("  A\n");
			}
			if (x + 2 == baz_x)
			{
				baz = 0;
			}
			fas = 0;
		}
		for (j = 0; j < x; ++j)
		{
			printf(" ");
		}
		printf("  #\n");
		for (i = 0; i < x; ++i)
		{
			printf(" ");
		}
		printf("#####\n");
		for (i = 0; i < x; ++i)
		{
			printf(" ");
		}
		printf(" M M\n");
		move = _getch();
		if (move == 'w')
		{
			y--;
		}
		if (move == 's')
		{
			y++;
		}
		if (move == 'a')
		{
			x--;
		}
		if (move == 'd')
		{
			x++;
		}
		if (move == ' ')
		{
			fas = 1;
		}

		if (fens == 10)
			break;
	}
	printf("\n游戏结束\n");
	return 0;
}