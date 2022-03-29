#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: substring accepted
 *
 * Description: This function  gets the length of a prefix substring
 * Return: number of bytes in the the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
				k++;

			j++;
		}

		i++;
	}

	return (k);
}
