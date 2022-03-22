#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: string to output
 *
 * Description: Function that prints a string followed by a new line to stdout
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	if (*str != 0)
	{
		do {
			_putchar(str[i]);
			i++;
		} while (str[i] != '\0');
	}
	_putchar('\n');
}
