#include <stdio.h>
int main()
{
    char* a[] = { "asdf","ad","fjfj" };
    char** p = a;
    p++;
    printf("%s\n", *p);
    return 0;
}
int main()
{
    char* c[] = { "EITER","NEW","POINT","FIRST" };
    char** cp[] = { c + 3,c + 2,c + 1,c };
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);
    return 0;
}