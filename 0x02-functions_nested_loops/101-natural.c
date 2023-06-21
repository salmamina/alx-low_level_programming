#include "main.h"
/**
 * main - compute sum of all multiples of 3 and 5
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i, som = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			som = som + i;
	}
	printf("%d\n", som);

	return (0);
}
