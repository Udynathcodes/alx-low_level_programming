#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
