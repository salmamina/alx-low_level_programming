#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Despription: print alphabet in lowercase
 *
 * Return: 0 (successs)
*/

void print_alphabet_x10(void)
{
	int i, ch;
	
	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch == 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
