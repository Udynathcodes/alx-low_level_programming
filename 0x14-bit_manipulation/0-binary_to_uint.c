#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Point to a string of 0 and 1 chars
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0;

	if (!b)
	return (0);

	while (*b == '0' || *b == '1')
	{
	k <<= 1;
	k += (*b - '0');
	b++;
	}

	if (*b != '\0')
	return (0);
	return (k);
}
