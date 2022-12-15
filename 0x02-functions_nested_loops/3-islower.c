#include "main.h"

/**
 * _islower - Entry point
 * @c: The charcter to be checked
 * Description: check for lowercase character
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
