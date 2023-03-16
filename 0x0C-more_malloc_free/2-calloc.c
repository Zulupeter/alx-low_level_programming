#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL.
 *         If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return ((void *)mem);
}
