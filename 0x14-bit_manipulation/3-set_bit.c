#include "main.h"
/**
 * set_bit - where the main codes happen
 * @n: number
 * @index: index
 * Return: 1 for success, -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 53)
		return (-1);
	x = x << index;
	*n = *n | x;
	return (1);
}
