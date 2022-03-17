#include <unistd.h>

/**
 * _isupper - checks for uppercase character
 * @c: The character to print
 *
 * Return: On success 1. Otherwise 0.
 */
int _isupper(int c)
{
	int rval;

	if (c >= 65 && c <= 90)
		rval = 1;
	else
		rval = 0;

	return (rval);
}
