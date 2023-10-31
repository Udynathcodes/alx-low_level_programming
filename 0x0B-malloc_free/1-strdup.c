#include "main.h"
#include <stdlib.h>
/**
  * _strdup - Copies a string
  * @str: string
  * Return: 0
  */
char *_strdup(char *str)
{
	int i, str_len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	str_len = 0;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	dup = (char *) malloc(str_len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
