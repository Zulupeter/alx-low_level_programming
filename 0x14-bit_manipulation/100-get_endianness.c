#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little endian, 0 if big endian.
 */

int get_endianness(void)

{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}
