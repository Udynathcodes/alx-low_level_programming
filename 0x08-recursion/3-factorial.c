#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @u: number to return the factorial from
 *
 * Return: factorial of u
 */
int factorial(int u)
{
	if (u < 0)
		return (-1);
	if (u == 0)
		return (1);
	return (u * factorial(u - 1));
}

