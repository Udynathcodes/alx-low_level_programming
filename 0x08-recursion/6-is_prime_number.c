#include "main.h"

/**
  * is_prime_number - function input if integer is prime
  * @n: int
  * Return: 0
  */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_helper(n, n - 1));
}

/**
  * prime_helper - checks if n is prime
  * @n: integer
  * @devisor: devisor int
  * Return: 0
  */

int prime_helper(int n, int devisor)
{
	if (devisor <= 1)
	{
		return (1);
	}
	if (n % devisor == 0)
	{
		return (0);
	}
	return (prime_helper(n, devisor - 1));
}
