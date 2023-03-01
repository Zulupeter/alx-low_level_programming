#include <stdio.h>
#include <ctype.h>
#include <string.h>


char *cap_string(char *str)

{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || isspace(str[i - 1]) || strchr(",;.!?\"(){}", str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
