#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to be checked
 *
 * Return: (rval) Success ortherwise nothing
 */
int print_last_digit(int n)
{
	int rval;
	
	rval = n % 10;
	if (n < 0)
		rval = rval * -1;
	_putchar(rval + '0');
	return (rval);
}
