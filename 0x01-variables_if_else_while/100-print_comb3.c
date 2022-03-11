#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible conbinations of two-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 49 ; j <= 57 ; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
