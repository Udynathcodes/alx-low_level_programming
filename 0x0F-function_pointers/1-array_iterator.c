#include <stdlib.h>
/**
  * array_iterator - prints every element of an array
  * @array: array of the elements
  * @size: size of the array
  * @action: pointer to functions
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
