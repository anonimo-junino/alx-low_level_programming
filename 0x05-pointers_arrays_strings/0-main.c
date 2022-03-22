#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int * p = &n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	printf("size of n %li\n", sizeof(n));
	printf("value of n %dn", n);

	printf("size of p %li\n", sizeof(p));
	/*printf("value of p %p \n", p);*/
	printf("size of *p %li \n", sizeof(*p));
	printf("value of *p %d \n", *p);
	return (0);
}
