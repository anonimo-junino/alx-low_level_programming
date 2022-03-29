#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string in which search
 * @c: character to be searched
 *
 * Description: This function locates a character in a string
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i])
		i++;

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (j);
		}
	}

	return ('\0');
}
