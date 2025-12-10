#include <stdio.h>
int main()
{
	int a,i = 0;
	scanf("%d", &a);
	printf("奇数:");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	printf("偶数:");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
	return 0;
}