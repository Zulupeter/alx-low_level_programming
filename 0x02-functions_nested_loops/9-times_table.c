#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)

{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0, k = 1; j <= 9; j++, k++)
		{
			l = i * j;
			m = i * k;

			if (m > 9 && j != 9)
				printf("%d, ", l);
			else if (j == 9)
				printf("%d", l);
			else
				printf("%d,  ", l);
		}
		putchar('\n');
	}
}
