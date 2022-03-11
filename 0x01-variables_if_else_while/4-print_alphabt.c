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

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'q') && (i != 'e'))
		putchar(i);
	}
	putchar('\n');
	return (0);
}
