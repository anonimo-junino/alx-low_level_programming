#include "main.h"
#include <stdio.h>

/**
 * checkprime - check if number is prime
 * @n: number to be checked
 * @i: iteration times
 *
 * Description: This function checks if number is prime or not
 * Return: 1 for prime or 0 composite
 */
int checkprime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i > 1 && n % i == 0)
		return (0);

	if ((n / i) < i)
		return (1);

	return (checkprime(n, i + 1));
}

/**
 * is_prime_number - returns 1 or 0
 * @n: number to be checked
 *
 * Description: This function returns 1 if the inputnumber otherwise return 0
 * Return: integer value 1 for prime or 0 composite
 */
int is_prime_number(int n)
{
	return (checkprime(n, 1));
}
