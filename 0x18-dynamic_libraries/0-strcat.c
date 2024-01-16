#include "main.h"
/**
  * _strcat - a function that concatenates strings
  * @dest: parameter1
  * @src: parameter2
  * Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
