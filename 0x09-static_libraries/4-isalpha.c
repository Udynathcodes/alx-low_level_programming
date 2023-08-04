#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @r: the character to be checked
 * Return: 1 if r is a letter, 0 otherwise
 */
int _isalpha(int r)
{
	return ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'));
}

