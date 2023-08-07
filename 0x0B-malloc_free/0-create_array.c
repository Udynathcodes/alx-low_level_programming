#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @n: char to assign
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char n)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		str[p] = n;
	return (str);
}

