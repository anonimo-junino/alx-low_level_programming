#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Strings contact
 * @dest: frist string
 * @src: second string
 * @n: bytes from src to be used
 *
 * Description: concatenates two strings using n byte from the second
 * Return: point to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int tdest = 0;
	int tsrc;
	int i = 0, j = 0;

	for (tdest = 0; dest[tdest] != '\0'; tdest++)
	{

	}

	for (tsrc = 0; src[tsrc] != '\0'; tsrc++)
	{

	}

	for (i = 0; src[j] != 0; i++)
	{
		if ( j < n)
		{
			dest[tdest] = src[j];
			tdest++;
			j++;
		}
	}

	dest[tdest + n + 1] = '\0';
	return (dest);
}
