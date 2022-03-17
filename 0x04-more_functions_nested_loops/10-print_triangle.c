#include "main.h"

/**
 * print_triangle - print triangle
 * @size: triangle zize
 *
 * Description: Function that prints a triangle, followed by a new line
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j >= 1; j--)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
