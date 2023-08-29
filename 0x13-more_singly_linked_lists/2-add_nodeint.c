#include "lists.h"
/**
 * add_nodeint - add a new node at the start of a new list.
 * @head: pointer to the head
 * @n: string
 * Return: number of node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
