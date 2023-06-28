#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: input string
 * Return: print string in reverse ordre
*/

void print_rev(char *s)
{
	int i, j;
	
	while (*s != '\0')
		s++;
	i = _strlen(*s)
	for (j = 0; j < i; s--)
		_putchar(*s + 0);
		j++;
	_putchar('\n');
}
