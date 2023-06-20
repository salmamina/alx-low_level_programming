#include "main.h"

/**
 * print_alphabet - print alphabet in lowecase
 *
 * Despription: print alphabet in lowercase
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
