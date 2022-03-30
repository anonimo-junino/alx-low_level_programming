#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Description: This function returns the factorial of a given number
 * Return: value returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n -1));
}
