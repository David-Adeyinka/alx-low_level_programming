#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * The function prints a random munber and checks its last digit, compares it with 5 and 6
 * Return: 0 
 */
int main(void)
{
	int n;
	int lasg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasg = n % 10;
	if (lasg > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lasg);
	else if (lasg == 0)
		printf("Last digit of %i is %i and is 0\n", n, lasg);
	else if (lasg < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lasg);
	return (0);

}
