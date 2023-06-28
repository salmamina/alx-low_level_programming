#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: input string
 * Return: half of a tsring
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	for (j = (i + 1) / 2; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
