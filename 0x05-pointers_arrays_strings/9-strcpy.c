#include "main.h"
#include <stdio.h>

/**
 * _strcpy - string copy
 * @dest: the pointer
 * @src: string to copy
 *
 * Description: Function that copies the string pointed to by src including
 * the terminating null byte (\0) to the buffer pointed to by dest
 * Return: on success dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, lgth = 0;

	do {
		lgth++;
	} while (src[lgth] != '\0');

	if (src != NULL)
	{
		for (i = 0; i <= lgth; i++)
			dest[i] = src[i];
	}
	else
		dest = { };

	return (dest);
}
