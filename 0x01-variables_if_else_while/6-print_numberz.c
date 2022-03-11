#include <stdio.h>
#include <stdlib.h>

/**
 * main - print digit in base 10 using only putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
