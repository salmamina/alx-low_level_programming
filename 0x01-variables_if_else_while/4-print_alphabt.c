#include <stdio.h>

/**
 * main - print alphabetexcept q and e
 *
 *Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	/*print a-z*/
	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
