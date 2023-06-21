#include "main.h"

/**
 * print_to_98 - function that print numbers between n and 98
 *
 * @n: number to start
 *
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i >= 98; i--)
			printf(i, ", ");
	else
	{
		for (i = n; i < 98; i++)
			printf(i, ", ");
	}
	printf("98\n");
}
