#include "main.h"

/**
  * factorial - function that returns factorial of a given number
  * @n: variable
  * Return: 0
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
