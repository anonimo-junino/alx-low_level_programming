#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Strings contact
 * @dest: frist string
 * @src: second string
 *
 * Description: concatenates two strings
 * Return: point to dest
 */
char *_strcat(char *dest, char *src)
{
	int tdest = 0;
	int i = 0;

	for (tdest = 0; dest[tdest] != '\0'; tdest++)
	{

	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[tdest] = src[i];
		tdest++;
	}
	
	dest[tdest] = '\0';
	return (dest);

}
