#include "lists.h"
/**
* add_node - adds a new node at the beginning
* of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: pointer to the newly added node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (head == NULL)

	{
		(*head)->next = temp;
	}
	else
	{
		temp->next = *head;
		(*head) = temp;
	}
	return (temp);
}
