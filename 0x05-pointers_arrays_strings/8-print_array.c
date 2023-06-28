#include "main.h"

/**
 * print_array - print n element of an array
 *
 * @a: input pointer
 * @n: number of element
 *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);

	printf("\n");
}
