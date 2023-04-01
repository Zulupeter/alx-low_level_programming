#include "lists.h"
/**
* list_len - returns then number of elements in a list.
* @h: head of the singly linked list.
* Return: the number of elements in the list.
*/

size_t list_len(const list_t *h)
{
size_t nelem;

nelem = 0;
for (; h != NULL;  h = h->next)
{
nelem++;
}
return (nelem);
}
