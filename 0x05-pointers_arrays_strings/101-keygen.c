#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0
 */
int main(void)
{
	int ascii = 2772, i = 0, j, rdm;
	char pwd[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		rdm = rand() % 126;
		pwd[i] = rdm;
		ascii -= rdm;
		i++;
	}
	if (ascii > 0)
		pwd[i] = ascii;
	else
		i--;
	for (j = 0; j <= i; j++)
		printf("%c", pwd[j]);

	return (0);
}

