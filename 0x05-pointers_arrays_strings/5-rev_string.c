#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be checked
 *
 * Description: Function that reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int nbrchar = 0;
	int i = 0, j =0;
	char v1, v2;

	if (*s != 0)
	{
		do {
			nbrchar++;
		} while (s[nbrchar] != '\0');

		j = nbrchar - 1;
		
		while (j > i)
		{
			v1 = s[i];
			v2 = s[j];
			s[i] = v2;
			s[j] = v1;
			j--;
			i++;
		}
	}
}
