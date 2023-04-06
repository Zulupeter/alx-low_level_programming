#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: Pointer to the first node in the new list.
 **/
listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	for (; current; prev = current, current = next)
	{
		next = current->next;
		current->next = prev;
	}
	*head = prev;

	return (*head);
}
