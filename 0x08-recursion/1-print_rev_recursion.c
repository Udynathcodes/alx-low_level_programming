#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @c: The string to be printed.
 */
void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}

