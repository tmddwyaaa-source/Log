#include <stdio.h>
#include <assert.h>
int main()
{
 
    printf("%s\n", strerror(0));
    printf("%s\n", strerror(1));
    printf("%s\n", strerror(2));
    printf("%s\n", strerror(3));
    printf("%s\n", strerror(4));

    FILE* pf = fopen("test.c", "r");
    if (pf == NULL)
    {
        printf("\n%s\n", strerror(errno));
        return 1;
    }
    else
    {
        printf("\n找到了\n");
        return 0;
    }
    return 0;

    return 0;
}