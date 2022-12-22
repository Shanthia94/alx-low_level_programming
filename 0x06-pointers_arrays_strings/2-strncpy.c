#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: the source of the string
 * @dest: destination of the string
 * @n: length of int
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + 1); i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
