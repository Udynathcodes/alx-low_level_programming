#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int u, binary = 0;
	unsigned long int num;

	for (u = 63; u >= 0; u--)
	{
		num = n >> u;

		if (num & 1)
		{
			_putchar('1');
			binary++;
		}
		else if (num)
			_putchar('0');
	}
	if (!binary)
		_putchar('0');
}

