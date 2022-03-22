#include "main.h"
#include <stdio.h>

/**
 * print_array - array print
 * @a: string array
 * @n: array number of elements to be printed
 *
 * Description: Function that prints n elements of an array of integers
 * followed by a new line
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
