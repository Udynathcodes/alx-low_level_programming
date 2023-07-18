#include "main.h"
/**
 * _isalpha - check if the given alphabet is lower case.
 * @c: alphabet to test.
 *
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}

