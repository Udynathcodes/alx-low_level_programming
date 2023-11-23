#include "main.h"
/**
  * binary_to_uint - convert binary to int
  * @b: string of 0s and 1s
  * Return: the number
  */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k, position = 0, length = 0;
	int count = 0, result = 0, exponent;

	while (b[length] != '\0')
	{
		count++;
		length++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			k = (b[i] - '0');
			exponent = 1;
			for (j = 0; j < position; j++)
			{
				exponent *= 2;
			}
			k *= exponent;
			result += k;
			position++;
		}
	}
	return (result);
}
