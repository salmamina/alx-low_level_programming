#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: input string
 * Return: print string in reverse ordre
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
