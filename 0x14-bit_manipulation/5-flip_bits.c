#include "main.h"
/**
  * flip_bits - flip bits
  * @n: int 1
  * @m: int 2
  * Return: bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, flipped_bits;

	difference = n ^ m;
	flipped_bits = 0;

	while (difference > 0)
	{
		if ((difference & 1) == 1)
		{
			flipped_bits++;
		}
		difference >>= 1;
	}
	return (flipped_bits);
}
