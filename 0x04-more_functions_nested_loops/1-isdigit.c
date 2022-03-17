#include <stdio.h>

/**
 * _isdigit - checks digit
 * @c: value to be checked
 *
 * Description: Function that checks for a digit
 * Returns: On Success 1, otherwise 0
 */
int _isdigit(int c)
{
	int rval;

	if (c >= 48 && c <= 57)
		rval = 1;
	else
		rval = 0;

	return (rval);
}
