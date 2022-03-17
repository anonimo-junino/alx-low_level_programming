#include <stdio.h>
#include "main.h"

/**
 * isPrime - analise if a number is prime or not
 * @n: number to check
 *
 * Return: if it is prime true otherwise not
 */
int isPrime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	return (1);
	}
}

/**
 * biggestFactor - returns the bigget prime factor of a number
 * @a: number to check
 *
 * Return: biggest factor
 */
long int biggestFactor(long int a)
{
	long int i, fact;

	fact = a;
	for (i = 2; i <= fact; i++)
	{
		if (isPrime(fact) == 1)
		{
			break;
		}
		else
		{
			if ((fact % i == 0) && (isPrime(i) == 1))
			{
				fact = fact / i;
				continue;
			}
			else
			{
				fact = fact;
			}
		}
	}
	return (fact);
}

/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0
 */
int main(void)
{
	long int n;

	n = 612852475143;

	if (isPrime(n) == 1)
		printf("%ld\n", n);
	else
		printf("%ld\n", biggestFactor(n));

	return (0);
}
