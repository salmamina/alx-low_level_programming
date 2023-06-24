#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: input number
 *
 * Return: straight line
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
			_putchar('_');
		_putchar('\n');
	}
}
