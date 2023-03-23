#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * Return: void
 */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list arg_list;

	va_start(arg_list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(arg_list);
	printf("\n");
}
