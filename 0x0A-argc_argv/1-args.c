#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * Description: Prints the number of arguments passed into the program
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/*Print the number of arguments passed, subtract 1 for program name*/
	printf("%d\n", argc - 1);
	return (0);
}
