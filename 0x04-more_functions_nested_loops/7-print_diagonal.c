#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Entry point
 * @n: number of times the character should be printed
 * Description: print a diagonal line on the terminal
 *
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
