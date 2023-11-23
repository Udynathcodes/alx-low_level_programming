#include "main.h"

/**
  * get_endianness - checks the endianness
  * Return: void
  */
int get_endianness(void)
{
	int one = 1;
	char *byte_pointer;

	byte_pointer = (char *)&one;

	if (*byte_pointer == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
