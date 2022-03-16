#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to be checked
 *
 * Return: (rval) Success ortherwise nothing
 */
int print_last_digit(int n)
{
	int num, rval;

	num = n;
	if (n > 0)
	{
		num = n;
		rval = n % 10;
	}
	else if (n == 0)
		rval = 0;
	else
	{
		num = (-1) * n;
		rval = n % 10;
	}

	return (rval);
}
