#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: 9times table
*/

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			_putchar((i * j) + 48);
		_putchar('\n');
	}
}
