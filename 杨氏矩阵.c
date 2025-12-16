#include <stdio.h>
#include <assert.h>
struct abc
{
    int i;
    int j;
};
struct  abc jzcz(int arr[3][3], int n, int m, int a)
{
    int x = 0;
    int y = m - 1;
    struct abc t = { 0,0 };
    while (x <= n - 1 && y >= 0)
    {
        if (a < arr[x][y])
        {
            y--;
        }
        else if (a > arr[x][y])
        {
            x++;
        }
        else
        {
            t.i = x;
            t.j = y;
            return t;
        }
    }
    return t;
}
int main()
{
    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
    int a = 0;
    scanf("%d", &a);
    struct abc ret = jzcz(arr, 3, 3, a);
     printf("找到了 %d %d\n",ret.i,ret.j);
    return 0;
}

int jzcz(int arr[3][3], int* i, int* j, int a)
{
    int x = 0;
    int y = *j - 1;
    while (x <= *i - 1 && y >= 0)
    {
        if (a < arr[x][y])
        {
            y--;
        }
        else if (a > arr[x][y])
        {
            x++;
        }
        else
        {
            *i = x;
            *j = y;
            return 1;
        }
    }
    *i = -1;
    *j = -1;
    return 0;
}
int main()
{
    int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
    int a = 0;
    scanf("%d", &a);
    int x = 3;
    int y = 3;
    int ret = jzcz(arr, &x, &y, a);
    if (ret == 1)
        printf("找到了 %d %d\n", x, y);
    else
        printf("没找到\n");
    return 0;
}