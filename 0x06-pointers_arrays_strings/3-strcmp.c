#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: rval an int value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, rval = 0, tmp;

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (i <= j)
		tmp = i;
	else
		tmp = j;

	while (k <= tmp)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			rval = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (rval);
}
