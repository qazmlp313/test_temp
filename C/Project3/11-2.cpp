#include <stdio.h>
#include <ctype.h>
#define LEN 10
char* getnchar(char* str, int n);

int main()
{
	char input[LEN];
	char* check;

	puts("Enter 10 strings:");
	check = getnchar(input, LEN - 1);
	if (check == NULL)
		puts("inout error");
	else
		puts(input);
	puts("Done!");

	return 0;
}

char* getnchar(char* str, int n)
{
	int i;
	char ch;

	for (i = 0; i < n; i++)
	{
		ch = getchar();
		if (isblank(ch))
		{ 
			str[i] = '\0';
			return str;
		}
		else
		{
			str[i] = ch;
		}
	}

	return str;
}