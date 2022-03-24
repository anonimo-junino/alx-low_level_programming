#include "main.h"
#include <stdio.h>

/**
 * _strncpy - String copies
 * @dest: frist string
 * @src: second string
 * @n: bytes from src to be used
 *
 * Description: function that copies a string
 * Return: point to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
