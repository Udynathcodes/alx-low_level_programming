#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int j;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[r] = src[j];
		r++;
		j++;
	}

	dest[r] = '\0';
	return (dest);
}
