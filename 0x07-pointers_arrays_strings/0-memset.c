#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area s
 * @b: constant byte
 * @n: first n bytes of the memory area pointed
 *
 * Description: This function fills memory with a constant byte
 * Return: pointer to be returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
