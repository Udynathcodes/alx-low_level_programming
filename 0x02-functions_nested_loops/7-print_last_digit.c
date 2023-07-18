#include "main.h"

/**
 * print_last_digit - will print the last digit of a given number.
 * @z:the init used to extract the last digit.
 *
 * Description: will return the last digit of a given number. If the
 * number is a negative the value will be return unsigned int.
 *
 * Return: last digit as int value.
 */
int print_last_digit(int z)
{
	z %= 10;
	if (z < 0)
	{
		z *= -1;
	}
	_putchar(z + '0');
	return (z);
}

