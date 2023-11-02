#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked -function  allocates memory
  * @b: integer used
  * Return: 0 on success
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
