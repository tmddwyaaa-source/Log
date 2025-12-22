#include <stdio.h>
int main()
{
    printf("打印两个数最大公约数和最小公倍数的和\n");   
    int n = 0;
    int m = 0;
    printf("请输入两个数字:>\n");
    while (scanf("%d %d", &n, &m)==2)
    {
        int min = n < m ? n : m;
        int max = n > m ? n : m;
        int i = min;
        int j = max;
        while (1)
        { 
            if (n%i==0 && m%i==0)
            {
                break;
            }
            i--;
        }
        while (1)
        {
            if (j % n == 0 & j % m == 0)
            {
                break;
            }
            j++;
        }
        printf("%d", i + j);
    }
    return 0;
}

int main()
{
    printf("打印两个数最大公约数和最小公倍数的和\n");                    //辗转相除法
    int n = 0;
    int m = 0;
    int r = 0;
    printf("请输入两个数字:>\n");
    while (scanf("%d %d", &n, &m)==2)
    {
        int i = n;
        int j = m;
        while (r = i % j)
        {
            i = j;
            j = r;
        }
        printf("%d\n", n*m/j+j);
    }
    return 0;
}