#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes string
 * @str: string to be capitalized
 *
 * Description: Function that capitalizes all words of a string
 * Return: capitalize string
 */
char *cap_string(char *str)
{
	int i = 0;
	int cptlz = 13;
	int ct = 0;
	char spr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[ct])
	{
		i = 0;

		while (i < cptlz)
		{
			if ((ct == 0 || str[ct - 1] == spr[i]) && (str[ct] >= 97 && str[ct] <= 122))
				str[ct] -= 32;

			i++;
		}
		ct++;
	}

	return (str);
}
