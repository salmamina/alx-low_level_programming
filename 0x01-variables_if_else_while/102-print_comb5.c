#include<studio.h>

/**
 * main - combinaison two two numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int fdigit = 0, sdigit;

	while (fdigit <= 99)
	{
		sdigit = fdigit;
		while (sdigit <= 99)
		{
			if (sdigit != fdigit)
			{
				putchar((fdigit / 10) + 48);
				putchar((fdigit % 10) + 48);
				putchar(' ');
				putchar((sdigit / 10) + 48);
				putchar((sdigit % 10) + 48);
				if (fdigit != 98 || sdigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sdigit++;
		}
		fdigit++;
	}
	putchar('\n');

	return (0);
}
