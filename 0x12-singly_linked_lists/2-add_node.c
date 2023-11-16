#include "lists.h"
/**
  * add_node - create a new node
  * @head: null head
  * @str: string to be passed
  * Return: pointer to the node
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

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
	new->next = *head;
	*head = new;

	return (*head);
}
