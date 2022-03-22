#include "main.h"

/**
 * print_rev - print string reverse
 * @s: string to be checked
 *
 * Description: Function that prints a string in reverse followed by a new line
 */
void print_rev(char *s)
{
	int nbrchar = 0;
	int i = 0;

	if (*s != 0)
	{
		do {
			nbrchar++;
		} while (s[nbrchar] != '\0');

		for (i = nbrchar; i >= 0; i--)
			_putchar(s[i]);
	}
	_putchar('\n');
}
