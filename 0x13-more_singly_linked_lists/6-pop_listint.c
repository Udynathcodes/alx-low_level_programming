#include "lists.h"
/**
 * pop_listint- Deletes the head node and return its value.
 * @head: head pointer.
 * Return: value of node deleted.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (value);
}
