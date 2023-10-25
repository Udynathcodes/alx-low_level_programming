#include "main.h"

/**
 * actual_sqrt_recursion - Help function to compute the square root recursively
 * @n: The non-negative integer for which to find the square root.
 * @i: The current guess for the square root.
 *
 * Return: The square root of 'n', or -1 if 'n' is not a perfect square.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1); / 'n' is not a perfect square.
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
