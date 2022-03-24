#include "main.h"
#include <stdio.h>

/**
 * string_toupper - String To Upper
 * @p: pointer of the string that will be modified
 *
 * Description: Function that changes all lowercase letters of a
 * string to uppercase
 * Return: uppercase string
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[a] <= 122)
			p[i] = p[i] - 32;

		i++;
	}

	return (p);
}
