#include "main.h"
#include <stdlib.h>
/**
 * str_concat - reach ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int g, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	g = ci = 0;
	while (s1[g] != '\0')
		g++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (g + ci + 1));

	if (conct == NULL)
		return (NULL);
	g = ci = 0;
	while (s1[g] != '\0')
	{
		conct[g] = s1[g];
		g++;
	}

	while (s2[ci] != '\0')
	{
		conct[g] = s2[ci];
		g++, ci++;
	}
	conct[g] = '\0';
	return (conct);
}

