#include "main.h"

/**
 * _strlen - get lentgth of a string
 * @s: string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen(s) + 1);
}

/**
 * checkpalindrome - check if a string is palindrome
 * @s: string
 *
 * Description: This function checks if a string is a palindrome
 * Return: integer value
 */
int checkpalindrome(char *s)
{
	int length = _strlen(s) - 1;

	if (*s == s[length])
	{
		s++;
		length--;
	}
	else
		return (0);

	return (1);
}

/**
 * is_palindrome - returns if a string is palindrome
 * @s: string
 *
 * Description: This function returns 1 if a string is a palindrome and 0
 * if not
 * Return: value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (checkpalindrome(s));
}
