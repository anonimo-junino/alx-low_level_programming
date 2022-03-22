#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints string half
 * @str: string to be checked
 *
 * Description: Function that prints half of a string followed by a new line
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i = 0;

	do {
		length++;
	} while (str[length] != '\0');

	while (str[i] != '\0')
	{
		if (i > (length - 1) / 2)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
