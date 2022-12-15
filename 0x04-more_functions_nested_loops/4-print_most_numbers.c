#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Entry point
 * @c: number to be printed
 * Description: print the numbers 0 to 9 followed by a new line
 *
 *
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' && c == '4'))
	{
		putchar('c');
	}
	putchar('\n');
	}
}
