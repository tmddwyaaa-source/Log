#include <stdio.h>
#include <assert.h>
char* my_strcat(char* a,const char* b)
{
    char* len = a;
    assert(a && b);
    while (*a != '\0')
    {
        *a++;
    }
    while (*a++ = *b++)
        ;
    return len;
}
int main()
{
    char a[20] = "asdfgh ";
    printf("%s ", my_strcat(a, " QwQ"));
    return 0;
}