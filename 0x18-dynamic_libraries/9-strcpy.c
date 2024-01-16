#include "main.h"
/**
  * _strcpy - copies a string
  * @dest: parameter1
  * @src: parameter2
  * Return: 0
  */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
