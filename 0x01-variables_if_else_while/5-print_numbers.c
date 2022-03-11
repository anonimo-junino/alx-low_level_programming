#include <stdio.h>
#include <stdlib.h>

/**
 * main - print digit in base 10
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 9 ; i >= 0 ; i--)
	{
		printf("%d", i);
	}
	return (0);
}
