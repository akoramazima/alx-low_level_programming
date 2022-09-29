#include "main.h"

/**
 * find_sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _find_sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (find_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: square number
 *
 * Return: the square root of n
 */
int _find_sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return  (find_sqrt(n + 1, x));
}
