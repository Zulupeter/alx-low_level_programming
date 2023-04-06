#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all data (n) in a linked list.
 * @head: Pointer to the first node of the linked list.
 *
 * Return: The sum of all the data in the linked list.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
	}

	return (total);
}
