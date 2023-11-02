#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: string1
  * @s2: string2
  * @n: integer
  * Return: 0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_len, s2_len;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = 0;
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	s2_len = 0;
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	con = (char *) malloc(s1_len + n + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		con[i + j] = s2[j];
	}
	con[i + j] = '\0';
	return (con);
}
