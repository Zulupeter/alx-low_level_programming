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
	int n;

	srand(time(0));
	n = rand() % 100 + 1;


	printf("Random number: %d\n", n);


	return (0);
}
