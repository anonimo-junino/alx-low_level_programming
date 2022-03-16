#include "main.h"
/**
 * jack_bauer - minute day of Jack Bauer
 *
 * Description: This function prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * Reurn: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		if (i <= 9)
			_putchar('0');

		_putchar(i);
		_putchar(':');

		for (j = 0; j <= 59; j++)
		{
			if (j <= 9)
				_putchar('0');
			_putchar(j);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
