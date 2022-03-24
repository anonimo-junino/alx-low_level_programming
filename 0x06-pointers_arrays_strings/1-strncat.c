#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Strings contact
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
	int counter = 0;

	for (tdest = 0; dest[tdest] != '\0'; tdest++)
	{

	}

	while (src[counter] && (counter < n))
	{
		dest[tdest] = src[counter];
		tdest++;
		counter++;
	}

	dest[tdest + n + 1] = '\0';
	return (dest);
}
