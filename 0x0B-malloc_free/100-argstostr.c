#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - Convert the params passed to the program to string
  * @ac: count arg
  * @av: vector arg
  *
  * Return: value
  */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *sz;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	sz = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			sz[k] = av[i][j];
			k++;
			j++;
		}

		sz[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	sz[k] = '\0';
	return (sz);
}
