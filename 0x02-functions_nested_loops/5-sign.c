#include "main.h"
/**
 * print_sign - print sign of number
 * @n: input of function
 * Return: 0 (zero) 1 (greater than zero) -1 (less than zero)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		print ("-");
		return (-1);
	}
	else
	{
		print("0");
		return (0);
	}
}
