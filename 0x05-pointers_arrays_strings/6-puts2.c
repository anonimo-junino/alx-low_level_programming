#include "main.h"
#include <stdio.h>

/**
 * puts2 - puts other characters
 * @str: string to be checked
 *
 * Description: Function that prints every other character of a string starting
 * with the first character followed by a new line
 * Return: void
 */
void puts2(char *str)
{
	int length = 0, i = 0;

	do {
		length++;
	} while (str[length] != '\0');

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
