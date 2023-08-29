#include "lists.h"
/**
 * print_listint - prints the int value.
 * @h: pointer to the head.
 * Return: num of nodes in each element.
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		k++;
	}
	return (k);
}
