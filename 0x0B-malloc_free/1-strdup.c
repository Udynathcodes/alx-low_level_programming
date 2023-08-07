#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int y, v = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	aaa = malloc(sizeof(char) * (y + 1));

	if (aaa == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		aaa[v] = str[v];

	return (aaa);
}
