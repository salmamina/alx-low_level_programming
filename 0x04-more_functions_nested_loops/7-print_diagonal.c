#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input value of '_'
 *
 * Return: diagonal line
 *
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; i++)
				_putchar(' ');
			_putchar(92);
		}
		_putchar('\n');
	}
}
