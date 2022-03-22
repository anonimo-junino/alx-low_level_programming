#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - the length of a string
 * @s: string that length must be none
 *
 * Description: Function that returns the length of a string
 * Return: on sucess length
 */
int _strlen(char *s)
{
	int nbrChar = 0;

	if (*s != 0)
	{
		do {
			nbrChar++;
		} while (s[nbrChar] != '\0');
	}

	return (nbrChar);
}
