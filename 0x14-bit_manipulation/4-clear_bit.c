#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the vaule of a bit to 0 at given index.
 * @n: The number whose bit is to be cleared.
 * @index: The index of the bit to be to be cleared.
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
