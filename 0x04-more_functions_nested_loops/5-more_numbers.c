#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j + 48);
		_putchar('\n');
	}
}
