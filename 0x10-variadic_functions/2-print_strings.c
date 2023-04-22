#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to separate strings
 * @n: number of arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *ptr;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(l, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}

