#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The number whose bit its to be set.
 * @index: The index of the bit to be set.
 * Return: 1 0n succews, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
