#include "main.h"

/**
 * int _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Description: This function returns the length of a string
 * Return: integer value, the lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
