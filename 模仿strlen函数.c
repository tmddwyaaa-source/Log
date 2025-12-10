#include <stdio.h>
int mystrlen(char* str)
{
	char* strle = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - strle);
}
int main()
{
	int i = mystrlen("asdfgh");
	printf("%d\n", i);
	return 0;
}
