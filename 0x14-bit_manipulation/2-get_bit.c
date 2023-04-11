#include "main.h"

/**
 * get_bit - Returns Value of a bit at a given index.
 * @n: The number whose bit is to be retrieved.
 * @index: The index of the bit to be retrieved.
 * Return: The value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bit_value;

	bit_value = (n >> index);
	if (index > 32)
		return (-1);

	return (bit_value & 1);
}
