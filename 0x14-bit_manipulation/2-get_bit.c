#include "main.h"
/**
  * get_bit - get value of a bit at given index
  * @n: int
  * @index: index
  * Return: the bit value
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
