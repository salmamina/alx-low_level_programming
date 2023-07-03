#include "main.h"
/**
 * _memcpy - copy memory area
 *
 * @dest: first input
 * @src: second first
 * @n: third input
 * Return: pointer to memory of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n ; it++)
		dest[it] = src[it];
	return (dest);
}
