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
		for (j = 49 ; j <= 58 ; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != 57 || j != 87)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
