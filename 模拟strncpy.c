#include <stdio.h>
char* my_strncpy(char* att, const char* arr, size_t n)

{

    int i = 0;

    char* ret = att;

    for (i = 0; i < n; i++)

    {

        *(att + i) = *(arr + i);

    }

    if (i < n)

    {

        *(att + i) = '\0';

    }



    return ret;

}

int main()

{

    char arr[10] = "asdfg";

    char att[20] = { 0 };

    char* ret = strncpy(att, arr, 5);

    printf("%s ", ret);

    return 0;

}