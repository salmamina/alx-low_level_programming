#include "main.h"

/**
 * _strcmp - compare two strings.
 *
 * @s1: first input
 * @s2: second input
 * Return: pointer to the resulting string
*/

int _strcmp(char *s1, char *s2)
{
	int i, equal;

	equal = 0;
	i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		i++;
	}
	return (equal);
}
