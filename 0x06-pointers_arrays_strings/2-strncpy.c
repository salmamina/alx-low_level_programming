#include "main.h"

/**
 * *_strncpy - copy string in string.
 *
 * @dest: first input
 * @src: second input
 * @n: numbre of byte
 *
 * Return: pointer to the resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
