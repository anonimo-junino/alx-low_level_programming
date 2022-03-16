include "main.h"

/**
 * print_sign - print sign
 * @n: number to be checked
 *
 * Return: (1) and prints '+' if number > 0
 * (0) and prints '0' if number = 0
 * (-1) and prints '-' if number < 0
 */
int print_sign(int n)
{
	int rval;

	if (n > 0)
	{
		rval = 1;
		_putchar("+");
	}
	else if (n == 0)
	{
		rval = 0;
		_putchar("0");
	}
	else
	{
		rval = -1;
		_putchar("-")
	}

	return (rval);
}
