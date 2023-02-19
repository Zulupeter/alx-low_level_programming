#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
	if (m > 5)
		printf("the last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("the last digit of %d is %d and if equal to zero\n", n, m);
	else if (m < 6)
		printf("the last digit of %d is %d and is less than 6 and not zero\n", n, m);

	return (0);
}
