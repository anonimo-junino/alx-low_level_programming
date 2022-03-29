#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: square matrix
 * @size: the size of the square
 *
 * Description: This function prints the sum of the two diagonals
 * of a square matrix of integers
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sone = 0, stwo = 0;

	for (i = 0, b < size; i++)
	{
		sone += a[(size + 1) * i];
		stwo += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sone, stwo);
}
