#include "main.h"
/**
 * clear_bit - Entry point
 * @n: number
 * @index: index.
 * Return: 1 on success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int u = 1;

	if (index > 53)
		return (-1);
	u = u << index;
	u = ~u;
	*n = *n & u;
	return (1);
}
