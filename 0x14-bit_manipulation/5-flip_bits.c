#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number
 * @m: the other number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count = 0;

	diff = n ^ m;

	while (diff != 0)
	{
		if (diff & 1)
			count++;
		{
			diff >>= 1;
		}
	}
	return (count);
}
