#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		if (r == 0)
			printf("%d", a[r]);
		else
			printf(", %d", a[r]);
	}
		printf("\n");
}
