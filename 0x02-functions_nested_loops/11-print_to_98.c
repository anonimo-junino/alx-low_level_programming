#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 * @n: Top limit number
 *
 * Description: This is function that prints all naural numbers
 * from n to 98 followed by a new line
 */
void print_to_98(int n)
{
	int i;
	int beg;
	int end;

	if (n > 98)
	{
		beg = 98;
		end = n;
	}
	else
	{
		beg = n;
		end = 98;
	}


	for (i = beg; i <= end; i++)
	{
		printf("%d", i);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
