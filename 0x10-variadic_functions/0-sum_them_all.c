#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry Point.
 * @n: variadic inputs.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0
 *	 Otherwise - Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ud;
	unsigned int r, sum = 0;

	if (n == 0)
		return (0);

	va_start(ud, n);

	for (r = 0; r < n; r++)
	{
		sum += va_arg(ud, const unsigned int);
	}

	va_end(ud);

	return (sum);
}
