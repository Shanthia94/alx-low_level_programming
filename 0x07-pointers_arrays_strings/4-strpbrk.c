#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of byte
 * @s: first occurence in the string
 * @accept: matches one of the byte or @NULL if no such byte
 * Return: a pointer to a byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
