#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int r, nl;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			if (r > 1)
			{
				for (nl = 1; nl <= r - 1; nl++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
