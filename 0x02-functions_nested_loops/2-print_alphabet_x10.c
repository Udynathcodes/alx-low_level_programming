#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
void print_alphabet_x10(void)
{
	char r;
	int i;

	for (i = 0; i < 10 ; i++)
	{
		for (r = 'a' ; r <= 'z' ; r++)
	{
		_putchar(r);
	}
		_putchar('\n');
	}
}

