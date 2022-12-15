#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 * @n: number of times the character should be printed
 * Description: draw a straight line in the terminal
 *
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
