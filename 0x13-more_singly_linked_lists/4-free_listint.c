#include "lists.h"
/**
  * free_listint - frees the list
  * @head: list
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
