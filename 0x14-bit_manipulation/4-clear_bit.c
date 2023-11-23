#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0
  * @n: pointer to the int
  * @index: index to replace
  * Return: 1 (success) -1 (fail)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitFlag;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitFlag = ~(1UL << index);
	*n = (*n & bitFlag);

	return (1);
}
