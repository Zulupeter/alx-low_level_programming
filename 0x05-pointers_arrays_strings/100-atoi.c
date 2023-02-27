#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)

{
	int sign = 1, num = 0;

	while (*s)

	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');

		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}

		return (sign * num);
}
