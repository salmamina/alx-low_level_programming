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
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				putchar(' ');
				j++;
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
