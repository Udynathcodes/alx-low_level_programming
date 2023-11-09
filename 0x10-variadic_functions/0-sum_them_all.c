#include "variadic_functions.h"
/**
  * sum_them_all - sums all the ints
  * @n: number of variadic functions
  * @...: variadic functions
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list sum_list;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_list, int);
	}
	va_end(sum_list);
	return (sum);
}
