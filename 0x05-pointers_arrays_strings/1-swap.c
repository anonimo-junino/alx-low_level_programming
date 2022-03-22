#include "main.h"

/**
 * swap_int - Swap integer
 * @a: first int
 * @b: seconde int
 *
 * Description: Function swaps the value of two integers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
