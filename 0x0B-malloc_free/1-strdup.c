#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *sz;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	sz = malloc((sizeof(char) * i) + 1);

	if (sz == NULL)
		return (NULL);

	while (a < i)
	{
		sz[a] = str[a];
		a++;
	}

	sz[a] = '\0';
	return (sz);
}
