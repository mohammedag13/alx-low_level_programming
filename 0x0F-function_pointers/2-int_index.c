#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: array of ints
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 *
 * Return: -1 if no element matches or if size <= 0,
 * if success returns first element for wich cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
