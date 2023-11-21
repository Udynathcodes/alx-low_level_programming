#include "lists.h"
/**
  * listint_len - return the number of elements
  * @h: list
  * Return: count
  */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
