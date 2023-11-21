#include "lists.h"
/**
  * pop_listint - deletes a node
  * @head: list
  * Return: node's data
  */
int pop_listint(listint_t **head)
{
	unsigned int i;
	listint_t *temp;

	temp = *head;
	*head = temp->next;
	i = temp->n;
	free(temp);

	return (i);
}
