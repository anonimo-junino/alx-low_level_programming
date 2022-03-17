#include "main.h"

/**
 * print_most_numbers - prints numbers
 *
 * Description: Function that prints the numbers, from 0 to 9
 * followed by a new line
 * Return: return void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			;
		else
			_putchar(i);
	}
	_putchar('\n');
}
