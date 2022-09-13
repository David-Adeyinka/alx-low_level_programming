#include <stdio.h>
#include <stdlib.h>
/**
 * main- main block
 * The program prints single numbers in base 10
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
