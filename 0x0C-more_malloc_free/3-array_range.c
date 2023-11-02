#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum integer
  * @max: maximum integer
  * Return: 0
  */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(((max - min) + 1) * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
