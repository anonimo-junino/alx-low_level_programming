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
	int k;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (j = 49 ; j <= 57 ; j++)
		{
			for (k = 50; k <=58; k++)
			{
				if ((k > j) && (j > i))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 56 || j != 57 || k != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
