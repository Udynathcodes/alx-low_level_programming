#include "lists.h"
/**
  * print_listint - print element of the lists
  * @h: list
  * Return: count
  */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
