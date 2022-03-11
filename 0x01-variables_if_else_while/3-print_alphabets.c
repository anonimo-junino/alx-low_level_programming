#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a-A'; i <= 'z-Z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
