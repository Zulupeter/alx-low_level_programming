#include "main.h"

/**
 * my_strcpy - copy a string from src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to the destination buffer
 */
char *my_strcpy(char *dest, const char *src)
{
	char *dest_orig = dest;

	while (*src)

	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest_orig);
}
