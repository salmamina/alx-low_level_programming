#include "main.h"

/**
 * print_most_numbers - function that prints the numbers,
 *from 0 to 9, followed by a new line
 *
 * Return: 0 (success)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
