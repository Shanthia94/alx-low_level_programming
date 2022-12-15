#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry point
 * @n: integer to be printed
 * Description: prints an integer
 *
 *
 */
void pint_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	putchar(i % 10 + '0');
}
