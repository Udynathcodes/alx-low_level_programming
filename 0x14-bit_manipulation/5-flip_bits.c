#include "main.h"
/**
 * flip_bits - Entry point
 * @n: num1
 * @m: num2
 * Return: bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	unsigned int r = 0;

	while (f)
	{
		if (f & 1)
			r++;
		f = f >> 1;
	}
	return (r);
}
