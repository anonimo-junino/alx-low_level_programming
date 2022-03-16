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
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else 
	{
		for (i = n; i <= 98; i--)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");

	}
	printf("\n");
}
