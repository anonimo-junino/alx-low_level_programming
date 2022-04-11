#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *sz;

	if (size == 0)
		return (NULL);

	sz = malloc(size * sizeof(char));

	if (sz == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		sz[i] = c;

	return (s);
}
