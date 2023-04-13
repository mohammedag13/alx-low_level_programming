#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source pointer
 * @dest: destination pointer
 * @n: bytes from memory area src to be copied
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
