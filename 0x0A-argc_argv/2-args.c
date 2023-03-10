#include <stdio.h>

/**
 * main - program that prints all arguments it recieves
 * @argc: number of command lines arguments passed
 * @argv: array of strings
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
