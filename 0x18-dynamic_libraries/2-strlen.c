#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to be checked
 * Description: returns the lenth of a string
 *
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
