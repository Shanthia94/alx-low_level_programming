#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
