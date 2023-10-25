#include "main.h"

/**
  * _strlen_recursion - function that returns len of a string
  * @s: str
  * Return: 0
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
