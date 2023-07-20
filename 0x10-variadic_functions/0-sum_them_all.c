#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;
	
	if (!n)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
