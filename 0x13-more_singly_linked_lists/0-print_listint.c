#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a singly linked list
 * @h: Pointer to the head of the list
 * Return: The number of  nodes in the list
 */

size_t print_listint(const listint_t *h)

{
	const  listint_t *tp;

	unsigned int count = 0;

	tp = h;

	while (tp)

	{
		printf("%d\n", tp->n);

		count++;

		tp = tp->next;
	}
	return (count);
}
