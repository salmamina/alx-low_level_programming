#include "main.h"
/**
 * _isalpha - checks if alphabet
 * @c - checks input function
 * Return: 1 (success) if letter, 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
