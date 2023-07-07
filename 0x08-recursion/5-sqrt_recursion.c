#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 *  square root
*/


int halp(int n, int i);
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
*/

int halp(int n, int i)
{
	int square;

	square = i * i;
	if (square == n)
		return (i);
	else if (square < n)
		return (halp(n, i + 1));
	else
		return (-1);
}
