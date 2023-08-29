#include "lists.h"

/**
 * listint_len - returns the number of elements in a lists
 * @h: pointer to the first node of a list.
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}

	return (r);
}

