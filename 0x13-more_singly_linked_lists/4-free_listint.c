#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Adress of the first node of the list.
 **/

void free_listint(listint_t *head)

{
	listint_t *current, *next;

	current = head;

	while (current != NULL)

	{
		next = current->next;
		free(current);
		current = next;
	}
}
