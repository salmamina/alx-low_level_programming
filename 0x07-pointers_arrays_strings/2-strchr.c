#include "main.h"
/**
 * _strchr - locate a caracter in a string
 *
 * @s: first input
 * @c: second first
 * Return: pointer to first occurrence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
