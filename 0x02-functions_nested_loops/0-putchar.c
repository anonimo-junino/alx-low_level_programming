#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints _putchar follewed by a new line
 *
 * Description: Prints _putchar followed by a new line
 *
 * Return: (0) Success
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
