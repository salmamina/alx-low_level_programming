#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - program mrint _putchar output
 *
 * return: 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
