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

	while (str[i])
		i++;

	j = i / 2;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
