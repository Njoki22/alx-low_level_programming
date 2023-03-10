#include <stdio.h>

/**
 * main - writes a program that prints its name,
 * followed by new line
 * @argc: number of arguments
 * @argv: array of string
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
