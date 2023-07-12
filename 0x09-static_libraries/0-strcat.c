#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: first input
 * @src: second input
 * Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
