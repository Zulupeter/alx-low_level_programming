#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of the list.
 * Return: no return.
 **/

void free_listint2(listint_t **head)

{
	listint_t *temp;
	listint_t *curr;

	if (head == NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
	{
		curr = curr->next;
		free(temp);
	}
		*head = NULL;
	}
}
