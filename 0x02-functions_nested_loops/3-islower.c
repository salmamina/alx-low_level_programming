#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: checks input of function
 * Return: 1 (success) if is lowercase 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
