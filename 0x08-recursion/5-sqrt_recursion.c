#include "main.h"
/**
 * check_sqrt - checks for sqrt
 * @a: int
 * @b: int
 * Return: int
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: -1 if n does not have sqrt, sqrt else
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
