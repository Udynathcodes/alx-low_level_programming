#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of a list.
 * @head: head pointer.
 * @n: data to put a new elem.
 * Return: number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);

}
