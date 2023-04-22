#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of arguments
 * @separator: string
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
