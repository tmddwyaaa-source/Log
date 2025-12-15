#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* a, const char* b)
{
    assert(a && b);
    while (*a == *b)
    {
        a++;
        b++;
        if (*a == '\0' && *b == '\0')
            return 0;
    }
    return (*a - *b);
}
int main()
{
    char a[] = "sdshjg";
    char b[] = "sdshjgj";
    int ret = my_strcmp(a, b);
    if (ret > 0)
        printf(">\n");
    else if (ret == 0)
        printf("==\n");
    else
        printf("<\n");
    return 0;
}