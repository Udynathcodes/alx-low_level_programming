#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that contains binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		num = 2 * num + (b[u] - '0');
	}

	return (num);
}

