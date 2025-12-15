#include <stdio.h>
#include <assert.h>
int main()
{
   char c[] = "tmddwy@qq.com";
   const char* x = "@.";
   char kj[24] = { 0 };
   strcpy(kj, c);
   char* ret = NULL;
  /* ret = strtok(kj, x);
   printf("%s\n", ret);
   ret = strtok(NULL, x);
   printf("%s\n", ret);
   ret = strtok(NULL, x);
   printf("%s\n\n\n", ret);
   char* ret = NULL;*/
   for (ret = strtok(c, x); ret != NULL; ret = strtok(NULL, x))
       printf("%s\n", ret);

    return 0;
}