#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Description: Prints 10 times the alphabet in lowercase 
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <=9 ; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
