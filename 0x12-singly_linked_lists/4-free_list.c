#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	for (current = head; current != NULL; current = head)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
