#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list l;

	va_start(l, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(l, int);

	va_end(l);
	return (sum);
}
