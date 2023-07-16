#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is an invalid character
 * or if the input string is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		char c = b[i];

		if (c == '0' || c == '1')
			result = result * 2 + (c - '0');
		else
			return (0);
	}

	return (result);
}
