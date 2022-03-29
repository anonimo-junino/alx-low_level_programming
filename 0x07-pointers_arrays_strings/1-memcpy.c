#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: bytes number to copie
 *
 * Description: This function write a copie from memory area
 * Return: dest area to return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
