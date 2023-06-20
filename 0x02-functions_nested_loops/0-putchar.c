#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - program mrint _putchar output
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";
	 size_t i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
