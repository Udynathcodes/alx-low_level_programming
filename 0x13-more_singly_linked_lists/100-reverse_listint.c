#include "lists.h"
/**
  * reverse_listint - reverses a list
  * @head: list pointer
  * Return: pointer to the first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *prev;

	forward = NULL;
	prev = NULL;

	while (*head != NULL)
	{
		forward = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = forward;
	}
	*head = prev;
	return (*head);
}
