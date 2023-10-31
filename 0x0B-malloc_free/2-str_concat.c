#include "main.h"
#include <stdlib.h>
/**
  * str_concat - concatenates two strings
  * @s1: string1
  * @s2: string2
  * Return: 0
  */
char *str_concat(char *s1, char *s2)
{
	int a, b, i, j;
	char *con_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	con_str = (char *) malloc(a + b + 1);
	if (con_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		con_str[i] = s1[i];
	}
	for (j = 0; j < b; j++)
	{
		con_str[i + j] = s2[j];
	}
	con_str[i + j] = '\0';
	return (con_str);
}
