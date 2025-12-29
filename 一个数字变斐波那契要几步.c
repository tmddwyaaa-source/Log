#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int c = a + b;

    while (1)
    {
        if (n == b)
        {
            printf("0\n");
            break;
        }
        else if (n < b)
        {
            if (abs(n - a) > abs(n - b))
            {
                printf("%d\n", abs(n - b));
                break;
            }
            else
            {
                printf("%d\n", abs(n - a));
                break;
            }
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
