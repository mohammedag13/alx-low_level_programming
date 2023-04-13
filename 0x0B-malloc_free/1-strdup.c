#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: string to be duplicated
 * Return: Null if str = Null or on insufficient memory
 * if success returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *str2;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	return (str2);
}
