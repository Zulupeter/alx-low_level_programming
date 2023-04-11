#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip.
 *
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int h, nflips = 0;
	unsigned int i = sizeof(unsigned long int) * 8;

	for (h = 0; h < i; h++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
