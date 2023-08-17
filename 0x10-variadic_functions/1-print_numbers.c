#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry Point.
 * @separator:  The string to be printed.
 * @n: Elements to be printed.
 * @...: A variable number of numbers to be printed.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int h;
	va_list nums;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(nums, n);

	if (n > 0)
		printf("%d", va_arg(nums, int));
	for (h = 1; h < n; h++)
		printf("%s%d", sep, va_arg(nums, int));
	printf("\n");
	va_end(nums);
}
