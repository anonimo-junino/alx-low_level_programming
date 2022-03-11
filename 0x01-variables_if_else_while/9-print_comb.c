#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible conbinations of single-digit numbers
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	//putchar('\n');
	return (0);
}
