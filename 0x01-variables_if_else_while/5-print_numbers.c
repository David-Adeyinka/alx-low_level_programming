#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * The program prints all single digits of base 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
