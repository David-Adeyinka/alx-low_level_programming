#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * The function prints the alphabets in lowercase
 * Return: 00
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
