#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 * Return: pointer to new allocated memory on success, 98 on fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

