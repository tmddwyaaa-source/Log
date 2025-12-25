#include <stdio.h>
char* my_strncat(char * arr,char * arr2,size_t n)

{

    char* ret = arr;

    while (*arr)

    {

        arr++;

    }

    for (int i = 0; i < n; i++)

    {

        *(arr + i) = *(arr2 + i);

    }

    arr = '\0';

    return ret;



}

int main()

{

    char arr[10] = "asdfg";

    char arr2[10] = "hjk";

    char* p = my_strncat(arr, arr2, 3);

    printf("%s", p);

    return 0;

}