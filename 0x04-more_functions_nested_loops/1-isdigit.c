#include <stdio.h>
#include <string.h>

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
	/*int i;*/

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		rval = 0;
	else if (c >= 48 && c <= 57)
		rval = 1;
	else
		rval = 0;
	
	/*
	*for (i = 0; i <= 9; i++)
	*{
	*	if (i == c)
	*		rval = 1;
	*	else
	*		rval = 0;
	*}
	*/

	return (rval);
}
