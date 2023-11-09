#include "variadic_functions.h"
/**
  * print_numbers - print the parameters
  * @separator: separate the int
  * @n: number of parameters passed
  * @...: arguments
  * Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers_list;

	va_start(numbers_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers_list, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers_list);
	printf("\n");
}
