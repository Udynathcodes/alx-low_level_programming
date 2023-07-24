#include "main.h"
/**
 * _strlen - returns the length of a string
 * @r: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *r)
{
	int longi = 0;

	while (*r != '\0')
	{
		longi++;
		r++;
	}

	return (longi);
}

