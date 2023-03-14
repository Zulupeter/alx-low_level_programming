#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of all arguments plus newlines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++; /* Add space for newline character */
	}

	str = malloc(sizeof(char) * (len + 1)); /* Allocate memory for new string */

	if (str == NULL)
		return (NULL);

	/* Copy each argument and add newline character */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[pos++] = av[i][j];

		str[pos++] = '\n'; /* Add newline character */
	}

	str[len] = '\0'; /* Add null terminator */

	return (str);
}
