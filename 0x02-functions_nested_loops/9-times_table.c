#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: 9times table
*/

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + 48);

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * j;
			if (prod <= 9)
				_putchar(' ');
			else
			{
				_putchar(prod / 10 + 48);
			_putchar(prod % 10 + 48);
			}
		}

		_putchar('\n');
	}
}
