#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: pointer to the string to be split
 *
 * Return: pointer to an array of strings (words), or NULL if fails
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, count = 0;


	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < count; i++, k++)
	{
		while (str[k] == ' ')
			k++;

		len = 0;
		while (str[k + len] != ' ' && str[k + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = str[k++ + j];
		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}
