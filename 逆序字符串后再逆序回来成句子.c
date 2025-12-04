#include <stdio.h>
void nixu(char* arr, char* end)
{
	assert(arr);
	assert(end);
	char* left = arr;
	char* right = end;
	while (left < right)
	{
		char x = *left;
		*left = *right;
		*right = x;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	nixu(arr, arr + len - 1);
	char* star = arr;
	while (*star)
	{
		char* end = star;
		while (*end != ' ' && *end != '\0')
			end++;
		nixu(star, end-1);
		if(*end!='\0')
			end++;
		star = end;
	}
	printf("%s", arr);
	return 0;
}