#include "main.h"

/**
 * create_array - create array of chars
 *
 * @size: input value
 * @c: second value
 * Return: pointer of char
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;

	return (n);
}
