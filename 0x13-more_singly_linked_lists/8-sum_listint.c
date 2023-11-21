#include "lists.h"
/**
  * sum_listint - sum of all data
  * @head: list
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	unsigned int i, sum = 0;

	while (head != NULL)
	{
		i = head->n;
		sum += i;
		head = head->next;
	}
	return (sum);
}
