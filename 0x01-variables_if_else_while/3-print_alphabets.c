#include <stdio.h>

/**
 *main - print alphabet
 *
 *Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
