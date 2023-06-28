#include "main.h"

/**
 * swap_int - swaps values
 *
 * @a: first input
 * @b: second input
 * Return: swaps values
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
