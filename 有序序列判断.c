#include <stdio.h>
int main()
{
    int flag1 = 0;
    int flag2 = 0;
    int arr[20] = { 0 };
    int i = 0;
    int n = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i - 1] < arr[i])
            {
                flag1 = 1;
            }
            else if(arr[i-1]>arr[i])
            {
                flag2 = 1;
            }
            else
            {
                ;
            }
        }
    }
    if (flag1 + flag2 <= 1)
    {
        printf("有序\n");
    }
    else
    {
        printf("无序\n");
    }
    return  0;
}
