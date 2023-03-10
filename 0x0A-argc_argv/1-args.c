#include <stdio.h>

/**
 * main - program that prints the number,
 * followed by new line
 * @argc: number of commandline arguments
 * @argv: array of strings
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int num_args = argc - 1;

	printf("%d\n", num_args);
	return (0);
}
