#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	bool x;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	printf("------------------------\n");
	x = '0' == 0;
	printf(" '0' = 0 : %d\n", x);
	x = 10 == 0;
	printf(" 10 = 0 : %d\n", x);
	
	return (0);
}
