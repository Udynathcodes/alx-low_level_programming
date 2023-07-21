#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @r: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int r)
{
	if (r >= 65 && r <= 90)
	{
		return (1);
	}
	return (0);
}
