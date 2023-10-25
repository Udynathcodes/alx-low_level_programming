#include "main.h"

/**
  * _pow_recursion - function that returns the power of a value
  * @x: patameter1
  * @y: parameter2
  * Return: 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
