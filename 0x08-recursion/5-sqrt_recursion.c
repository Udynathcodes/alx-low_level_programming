#include "main.h"
/**
  * _sqrt_recursion - print square root
  * @n: integer
  * Return: 0
  */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqr_helper(n, 1, n));
}
/**
  * _sqr_helper - looks for the squareroot
  * @n: integer
  * @start: start from 1
  * @end: end
  * Return: 0
  */
int _sqr_helper(int n, int start, int end)
{
	int middle, squared;

	if (start > end)
	{
		return (-1);
	}

	middle = (start + end) / 2;
	squared = middle * middle;

	if (squared == n)
	{
		return (middle);
	}
	else if (squared > n)
	{
		return (_sqr_helper(n, start, middle - 1));
	}
	else
	{
		return (_sqr_helper(n, start + 1, end));
	}
}
