#include <stdio.h>

/**
 * _isdigit - checks digit
 * @c: value to be checked
 *
 * Description: Function that checks for a digit
 * Return: On Success 1, otherwise 0
 */
int _isdigit(int c)
{
	int rval;

	if (c == 0)
		rval = 1;
	else if (c == 1)
		rval = 1;
	else if (c == 2)
		rval = 1;
	else if (c == 3)
		rval = 1;
	else if (c == 4)
		rval = 1;
	else if (c == 5)
		rval = 1;
	else if (c == 6)
		rval = 1;
	else if (c == 7)
		rval = 1;
	else if (c == 8)
		rval = 1;
	else if (c == 9)
		rval = 1;
	else
		rval = 0;

	/*
	 * for (i = 0; i <= 9; i++)
	*  {
	*	if (i == c)
	*		rval = 1;
	*	else
	*		rval = 0;
	*}
	*/
	return (rval);
}
