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

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('/');
	}
	_putchar('\n');
}


