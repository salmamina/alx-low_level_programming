#include "variadic_functions.h"


/**
 * print_strings - print each number with separator, followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of args passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
