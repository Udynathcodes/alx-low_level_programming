#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * _calloc - allocates memory
  * @nmemb: integer
  * @size: size of the typr
  * Return: 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	b = (char *) ptr;
	for (i = 0; i < nmemb; i++)
	{
		b[i] = 0;
	}

	return (ptr);
}
