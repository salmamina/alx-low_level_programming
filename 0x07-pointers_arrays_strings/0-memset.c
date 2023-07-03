#include "main.h"
/**
 * _memset - fill first n bytes
 *
 * @s: first input
 * @b: second first
 * @n: third input
 * Return: pointer to memory of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n ; it++)
		s[it] = b;
	return (s);
}
