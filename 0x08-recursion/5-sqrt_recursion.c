#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculates square
 * @n: number
 * @i: iterate
 *
 * Description: This function calculates natural quare root
 * Return: square
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt == n)
		return (i);

	if (sqrt > n)
		return (-1);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural quare root of a number
 * @n: number
 *
 * Description: This function returns the natural square root of a number
 * Return: integer value to be returned
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
