#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	char rev;

	/*find the length of th string*/
	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i / 2; j++)
	{
		rev = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = rev;
	}
}
