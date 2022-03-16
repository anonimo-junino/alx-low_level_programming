#include "main.h"

/**
 * _abs - absolute value
 * @n: number to be checked
 *
 * Description: That function computes the absolute value of an integer
 * Return: (n) if Sucess otherwise nothing
 */
int _abs(int n)
{
	int rval;

	if (n > 0)
		rval = n;
	else if (n == 0)
		rval = 0;
	else
		rval = (-1) * (n);

	return (rval);
}
