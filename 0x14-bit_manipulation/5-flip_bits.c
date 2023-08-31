#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, c = 0;
	unsigned long int num;
	unsigned long int x = n ^ m;

	for (r = 63; r >= 0; r--)
	{
		num = x >> i;
		if (num & 1)
			c++;
	}

	return (c);
}
