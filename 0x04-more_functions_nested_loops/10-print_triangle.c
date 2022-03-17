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
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
