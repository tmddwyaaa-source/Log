#include <stdio.h>
#include <assert.h>
void zuoxz(char* c, int n)
{
    int i = 0;
    int len = strlen(c);
    n%=len;
    for (i = 0; i < n; i++)
    {
        char x = *c;
        int j = 0;
        for (j = 0; j < len - 1; j++)
        {
            *(c + j) = *(c + j + 1);
        }
        *(c + len - 1) = x;
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    char c[] = "abcdef";
    zuoxz(c, n);
    printf("%s\n", c);
    return 0;
}


void jiaohuan(char* left, char* right)
{
    assert(left && right);
    while(left<right)
    {
        char x = *left;
        *left = *right;
        *right = x;
        left++;
        right--;
    }
}
void jiaohuan1(char* arr, int n)
{
    int y = strlen(arr);
    n %= y;
    jiaohuan(arr, arr + n - 1);
    jiaohuan(arr + n, arr + y - 1);
    jiaohuan(arr, arr + y - 1);
}
int main()
{
    /*int n = 0;
    scanf("%d", &n);
    char c[10] = "abcdef";
    char x[10] = { 0 };
    memcpy(x, c, n);
    strcat(c, x);
    printf("%s\n", x);
    printf("%s\n", c);*/

    int n = 0;
    scanf("%d", &n);
    char arr[10] = "asdfgh";
    jiaohuan1(arr, n);
    printf("\n%s\n", arr);
    return 0;
}