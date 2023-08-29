#include "lists.h"
/**
 * sum_listint - caculate the listint_t sum.
 * @head: head pointer.
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int r = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		r += temp->n;
		temp = temp->next;
	}
	return (r);
}
