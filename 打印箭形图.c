#include <stdio.h>
int main()
{
    int x = 0;
    while (scanf("%d", &x) == 1)
    {
        int i = 0;
        for (i = 0; i < x; i++)
        {
            int j = 0;
            for (j = 0; j < x-i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <=i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        //下半部分
        for (i = 0; i < x + 1; i++)
        {
            int j = 0;
            for (j = 0; j <i ; j++)
            {
                printf("  ");
            }
            for (j = 0; j <x+1-i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}