#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Completing code to print if the number is
 * greater than 5, 0 or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (n == 0)
	printf("Last digit of %d and is 0\n", n);
	else
	printf("Last digit of %d and is less than 6 and not 0\n", n);
	return (0);
}
