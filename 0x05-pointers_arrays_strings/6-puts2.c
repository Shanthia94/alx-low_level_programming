#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: char to be checked
 * Return: 0 if successful
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
