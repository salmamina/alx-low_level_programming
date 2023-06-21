#include "main.h"

/**
 * print_times_table - unction that prints the n times table, starting with 0
 * @n: number n time
*/

void print_times_table(int n)
{
	int prod, i, j, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				prod = i * j;
				_putchar(',');
				_putchar(' ');

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar(prod / 10 + 48);
					_putchar(prod % 10 + 48);
				}
				else
				{
					_putchar(prod / 100 + 48);
					r = prod - (prod / 100) * 100;
					_putchar(r / 10 + 48);
					_putchar((r % 10) + 48);
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
