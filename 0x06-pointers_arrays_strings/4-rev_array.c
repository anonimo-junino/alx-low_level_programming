#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a: integers array
 * @n: number of elements of the array
 *
 * Description: Function that reverses the content of an array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *p = a, i = 0, j = 0, arr;

	for (i = 0; i < (n - 1); i++)
		p++;

	for (j = 0; j < (i / 2); j++)
	{
		arr = a[j];
		a[j] = *p;
		*p = arr;
		p--;
	}
}
