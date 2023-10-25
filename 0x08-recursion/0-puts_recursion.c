#include "main.h"

/**
  * _puts_recursion - function that Prints a string
  * @s: str
  * Return: 0
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else

		_putchar('\n');
}
