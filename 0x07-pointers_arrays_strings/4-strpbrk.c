#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: string
 * @accept: accepted charachters
 *
 * Description: This function searches a string for any of a set of bytes
 * Return: a pointer to the byte in s that macthes
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
