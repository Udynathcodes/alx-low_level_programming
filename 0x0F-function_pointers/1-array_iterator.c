#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elememts on a newline
 * @array: array
 * @size: how many elememts to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int g;

	if (array == NULL || action == NULL)
		return;

	for (g = 0; g < size; g++)
	{
		action(array[g]);
	}
}

