#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Description: checks for lowercase character
 * Return: 1 if 'c' is lowercase or 0 otherwise
 */
int _islower(int c)
{
	int retourne;

	if ((c >= 97) && (c <= 122))
		retourne = 1;
	else
		retourne = 0;

	return (retourne);
}
