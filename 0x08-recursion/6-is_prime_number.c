#include "main.h"
/**
 * is_prime - if int prime or not
 * @n: int to check
 * @i: int
 * Return: 1 if int prime, 0 else
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}
/**
 * is_prime_number - is int prime or not
 * @n: int
 * Return: 1 if int prime, 0 else
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
