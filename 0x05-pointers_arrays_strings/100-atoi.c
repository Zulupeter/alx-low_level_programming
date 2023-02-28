#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(const char *s)

{
	int sign = 1, num = 0;

	if (s == NULL)
		return (0);
	while (*s)

	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
				return ((sign == 1) ? INT_MAX : INT_MIN);
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
