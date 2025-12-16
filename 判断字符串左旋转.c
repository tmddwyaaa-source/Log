#include <stdio.h>
#include <assert.h>
int pdzuoxz(char* a, char* b)
{
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        char x = *a;
        for (int j = 0; j < len - 1; j++)
        {
            *(a + j) = *(a + j + 1);
        }
        *(a + len - 1) = x;
        if (strcmp(a, b) == 0)
            return 1;
    }
    return 0;
}
int pdzuoxz2(char* a, char* b)
{
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (len1 != len2)
        return 0;
    strncat(a, a, len1);
    char* ret = strstr(a, b);
    if (ret != NULL)
        return 1;
    else
        return 0;
}
int main()
{
    char a[20] = "abcdef";
    char b[20] = "cdefab";
    int ret = pdzuoxz(a, b);
    if (ret == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}