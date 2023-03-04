#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, sum, carry = 0;

	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;
	if (l1 > size_r || l2 > size_r)
		return (0);
	r[size_r - 1] = '\0';
	for (i = l1 - 1, j = l2 - 1, k = size_r - 2;
			k >= 0 && (i >= 0 || j >= 0);
			i--, j--, k--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}
	if (carry && k >= 0)
		r[k--] = carry + '0';
	if (k == -1 || (k == 0 && r[1] == '\0'))
		return (0);
	return (&r[k + 1]);
}
