#include "main.h"
/**
 * times_table - Times Table
 *
 * Description: This function that prints the 9 times table
 * starting with 0
 * Reurn: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar(j);
			_putchar('\n');
		}
	}
}
