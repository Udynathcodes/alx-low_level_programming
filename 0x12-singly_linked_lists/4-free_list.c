#include "lists.h"
/**
  * free_list - frees list_t
  * @head: parameter
  * Return: 0
  */
void free_list(list_t *head)
{
	free(head);  
}
