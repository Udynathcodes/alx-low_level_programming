#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list.
 * @head: pointer to the first node in the list.
 * @idx: index where the new node is inserted.
 * @n: data to insert in the new node.
 * Return: pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

