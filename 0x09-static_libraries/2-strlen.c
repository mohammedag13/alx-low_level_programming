#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char input
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
