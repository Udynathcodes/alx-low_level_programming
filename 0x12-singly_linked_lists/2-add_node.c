#include "lists.h"
/**
  * add_node_end - adds anew node
  * @head: node
  * @str: struing to be added
  * Return: address of the new element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new, *temp;

	char *dup = strdup(str);

	for (i = 0; dup[i] != '\0'; i++)
	{
		count++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = dup;
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
