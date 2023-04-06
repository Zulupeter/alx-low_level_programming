#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: A pointer to a the head node of the list.
 * Return: The value of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)

{
	listint_t *tp;
	int m_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	m_data = tp->n;
	free(tp);

	return (m_data);
}
