#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: the string to use.
 *
 * Return: on success inetger
 */
int _atoi(char *s)
{
	int sgn = 1, i = 0;
	unsigned int rslt = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sgn *= -1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		rslt = (rslt * 10) + (s[i] - '0');
		i++;
	}
	rslt *= sgn;
	return (rslt);
}
