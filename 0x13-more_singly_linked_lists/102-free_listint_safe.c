#include "lists.h"
#include <stdlib.h>

/**
 * free_listp2- frees a linked list.
 * @head: A pointer to the head of a list.
 *
 * Return: No return.
 */

void free_listp2(listp_t **head)

{
	listp_t *tp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tp = curr) != NULL)
		{
			curr = curr->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Frees a linked list.
 * @h: A pointer to the head of a list.
 * Return: Size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->next = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
