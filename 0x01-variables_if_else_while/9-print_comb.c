#include <stdio.h>

/**
 * main - print number
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
