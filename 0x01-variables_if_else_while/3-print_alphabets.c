#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * The function prints the alphabets in lower and uppercase
 * Return (0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
