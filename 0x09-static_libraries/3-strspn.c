#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: first input
 * @accept: second first
 * Return: number of byte in initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int l = 0;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		l++;
		s++;
		accept++;
	}

	return (l);
}
