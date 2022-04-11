#include "main.h"
#include <stdio.h>

/**
 * main - Prints the args content
 * @argc: count arg
 * @argv: vector arg
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
