#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry level
 * @n: The number to be checked
 * Descrition: print value of n; if n is greater than zero print positive, if n is equal to zero print zero, else print negative
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else 
		printf("%i is negative\n", n);
	return (0);
}
