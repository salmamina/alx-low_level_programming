#include "main.h"
/**
 * print_triangle - pint triangle
 * @size: size of triangle
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int ht, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ht = 1; base <= size; ht++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((ht + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
