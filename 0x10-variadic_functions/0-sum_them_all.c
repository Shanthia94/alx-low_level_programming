#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameter
 * @n: number of parameter
 * Return: sums of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
