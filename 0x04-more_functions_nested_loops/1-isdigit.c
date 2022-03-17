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
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == c)
			rval = 1;
		else
			rval = 0;
	}
	
	return (rval);
}
