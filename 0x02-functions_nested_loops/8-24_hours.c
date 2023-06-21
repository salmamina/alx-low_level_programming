#include "main.h"

/**
 * jack_bauer - print every minute of day
 *
*/

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr + 48);
			_putchar(':');
			_putchar(min + 48);
			_putchar('\n');
		}
	}
}
