#include "main.h"

/**
 * _isalpha - checks for alphabetics character
 * @c: value to be return
 *
 * Return: 1 is 'c' is a letter lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	int retvalue;

	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		retvalue = 1;
	else
		retvalue = 0;

	return (retvalue);
}
