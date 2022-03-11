#include <stdio.h>
#include <stdlib.h>

/**
 * main - print digit in base 16 using only putchar and lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (i = 'a' ; i <= 'f' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
